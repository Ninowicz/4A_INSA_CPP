#include <iostream>
#include <cassert>
#include "jeu.hpp"

using namespace std;

Fantome::Fantome()
{
    posX = 0; posY = 0;
    dir = BAS;
}

int Fantome::getPosX() const
{
    return posX;
}

int Fantome::getPosY() const
{
    return posY;
}

Direction Fantome::getDir() const
{
    return dir;
}

Mood Fantome::getMood() const
{
    return mood;
}

Agent::Agent()
{
    posX = 0; posY = 0;
    dir = BAS;
}

int Agent::getPosX() const
{
    return posX;
}

int Agent::getPosY() const
{
    return posY;
}

Direction Agent::getDir() const
{
    return dir;
}

Fruit::Fruit()
{
    posX = 0; posY = 0;
}

int Fruit::getPosX() const
{
    return posX;
}

int Fruit::getPosY() const
{
    return posY;
}

Gum::Gum()
{
    posX = 0; posY = 0;
    Alive = true;
}

int Gum::getPosX() const
{
    return posX;
}

int Gum::getPosY() const
{
    return posY;
}

Node::Node()
{
    posX = 0; posY = 0;
}

Jeu::Jeu()
{
    terrain = NULL;
    largeur = 0; hauteur = 0;
    posPacmanX = 0; posPacmanY = 0;
}

Jeu::~Jeu()
{
    if (terrain!=NULL)
        delete[] terrain;
}

bool Jeu::init()
{
    result = FMOD_System_Create(&system);
    FMOD_System_Init(system, 8, FMOD_INIT_NORMAL, nullptr);

    result = FMOD_System_CreateSound(system, "./sounds/pacman_eatfruit.wav", FMOD_SOFTWARE, nullptr, &soundPacman_eatfruit);
    result = FMOD_System_CreateSound(system, "./sounds/pacman_beginning.wav", FMOD_SOFTWARE, nullptr, &soundPacman_beginning);
    result = FMOD_System_CreateSound(system, "./sounds/pacman_death.wav", FMOD_SOFTWARE, nullptr, &soundPacman_death);
    result = FMOD_System_CreateSound(system, "./sounds/pacman_chomp.wav", FMOD_SOFTWARE, nullptr, &soundPacman_chomp);
    result = FMOD_System_CreateSound(system, "./sounds/pacman_eatghost.wav", FMOD_SOFTWARE, nullptr, &soundPacman_eatghost);

    Etat_Jeu = PAUSE ;

    Clyde.number = 0;
    Pinky.number = 1;
    Blinky.number = 2;
    Inky.number = 3;

    TimerClyde = 0;
    TimerInky = 0;
    TimerBlinky = 0;
    TimerPinky = 0;

    TimerDesFantomes = 50; // Set le nombre de boucle que le jeu va effectuer avant que les fantomes redeviennent agressifs

	int x, y;
    GumMange = false;
    TazMange = false;

	NombreGum = 0;
	NombreGumMange = 0;

	NombreTaz = 0;
	NombreTazMange = 0;


	const char terrain_defaut[25][28] = {
		"###########################",
		"#gggggggggggg#gggggggggggg#",
		"#g####g#####g#g#####g####g#",
		"#t####g#####g#g#####g####t#",
		"#ggggggggggggggggggggggggg#",
		"#g####g#g#########g#g####g#",
		"#gggggg#ggggg#ggggg#gggggg#",
		"######g#####.#.#####g######",
		"######g#####.#.#####g######",
		".....#g#...........#g#.....",
		".....#g#.####.####.#g#.....",
		"######g#.#.......#.#g######",
		"......g..#.......#..g......",
		"######g#.#.......#.#g######",
		".....#g#.#########.#g#.....",
		".....#g#...........#g#.....",
		"######g#.#########.#g######",
		"#gggggggggggg#gggggggggggg#",
		"#g####g#####g#g#####g####g#",
		"#ggg##gggggggfggggggg##ggg#",
		"###g##g#g#########g#g##g###",
		"#tggggg#ggggg#ggggg#gggggt#",
		"#g##########g#g##########g#",
		"#ggggggggggggggggggggggggg#",
        "###########################"
    };

	largeur = 27;
	hauteur = 25;
	score = 0;
	mille = 0;
	cent = 0;
	dix = 0;
	un = 0;

	Vie_1 = true;
	Vie_2 = true;
	Vie_3 = true;

	terrain = new Case[largeur*hauteur];

	for(y=0;y<hauteur;++y)
		for(x=0;x<largeur;++x)
            if (terrain_defaut[y][x]=='#')
                terrain[y*largeur+x] = MUR;
            else if (terrain_defaut[y][x]=='g')
            {
                terrain[y*largeur+x] = GUM;
                NombreGum = NombreGum + 1;
            }
            else if (terrain_defaut[y][x]=='t')
            {
                 terrain[y*largeur+x] = TAZ;
                 NombreTaz = NombreTaz  + 1;
            }

            else if (terrain_defaut[y][x]=='f')
                terrain[y*largeur+x] = FRUIT;
            else
                terrain[y*largeur+x] = VIDE;

   const char node_defaut[25][28] = {
		"###########################", // 0
		"#N....N.....N#N.....N....N#",
		"#.####.#####.#.#####.####.#", // 2
		"#.####.#####.#.#####.####.#",
		"#N....N.N...N.N...N.N....N#", // 4
		"#.####.#.#########.#.####.#",
		"#N....N#N...N#N...N#N....N#", // 6
		"######.#####.#.#####.######",
		"######.#####.#.#####.######", // 8
		".....#.#N...NNN...N#.#.....",
		".....#.#.####.####.#.#.....", // 10
		"######.#.#.......#.#.######",
		"N.....N.N#.NNNNN.#N.N.....N", // 12
		"######.#.#.......#.#.######",
		".....#.#.#########.#.#.....", // 14
		".....#.#N.........N#.#.....",
		"######.#.#########.#.######", // 16
		"#N....N.N...N#N...N.N....N#",
		"#.####.#####.#.#####.####.#", // 18
		"#N.N##N.N...N.N...N.N##N.N#",
		"###.##.#.#########.#.##.###", // 20
		"#N.N..N#N...N#N...N#N..N.N#",
		"#.##########.#.##########.#", // 22
		"#N..........N.N..........N#", //
        "###########################"
    };

    nodes = new Case[largeur*hauteur];
    My_Nodes = new Node[largeur*hauteur];

    for(y=0;y<hauteur;++y)
		for(x=0;x<largeur;++x)
            if (node_defaut[y][x]=='N')
            {
                nodes[y*largeur+x] = NODE;
                My_Nodes[y*largeur+x].posX = x;
                My_Nodes[y*largeur+x].posY = y;
                My_Nodes[y*largeur+x].BvoisinGauche = false;
                My_Nodes[y*largeur+x].BvoisinDroit = false;
                My_Nodes[y*largeur+x].BvoisinHaut = false;
                My_Nodes[y*largeur+x].BvoisinBas = false;
            }
            else if (node_defaut[y][x]=='#')
                nodes[y*largeur+x] = MUR;

// Mise en place manuelle du reseau puisque l automatisation a echouee

// Ligne 1 :

    My_Nodes[1*largeur+1].BvoisinDroit = true;
    My_Nodes[1*largeur+1].BvoisinBas = true;

    My_Nodes[1*largeur+6].BvoisinDroit = true;
    My_Nodes[1*largeur+6].BvoisinGauche = true;
    My_Nodes[1*largeur+6].BvoisinBas = true;

    My_Nodes[1*largeur+12].BvoisinGauche = true;
    My_Nodes[1*largeur+12].BvoisinBas = true;

    My_Nodes[1*largeur+14].BvoisinDroit = true;
    My_Nodes[1*largeur+14].BvoisinBas = true;

    My_Nodes[1*largeur+20].BvoisinDroit = true;
    My_Nodes[1*largeur+20].BvoisinGauche = true;
    My_Nodes[1*largeur+20].BvoisinBas = true;

    My_Nodes[1*largeur+25].BvoisinGauche = true;
    My_Nodes[1*largeur+25].BvoisinBas = true;

    // Ligne 4 :

    My_Nodes[4*largeur+1].BvoisinDroit = true;
    My_Nodes[4*largeur+1].BvoisinBas = true;
    My_Nodes[4*largeur+1].BvoisinHaut = true;

    My_Nodes[4*largeur+6].BvoisinDroit = true;
    My_Nodes[4*largeur+6].BvoisinGauche = true;
    My_Nodes[4*largeur+6].BvoisinBas = true;
    My_Nodes[4*largeur+6].BvoisinHaut = true;

    My_Nodes[4*largeur+8].BvoisinDroit = true;
    My_Nodes[4*largeur+8].BvoisinGauche = true;
    My_Nodes[4*largeur+8].BvoisinBas = true;

    My_Nodes[4*largeur+12].BvoisinDroit = true;
    My_Nodes[4*largeur+12].BvoisinGauche = true;
    My_Nodes[4*largeur+12].BvoisinHaut = true;

    My_Nodes[4*largeur+14].BvoisinDroit = true;
    My_Nodes[4*largeur+14].BvoisinGauche = true;
    My_Nodes[4*largeur+14].BvoisinHaut = true;

    My_Nodes[4*largeur+18].BvoisinDroit = true;
    My_Nodes[4*largeur+18].BvoisinGauche = true;
    My_Nodes[4*largeur+18].BvoisinBas = true;

    My_Nodes[4*largeur+20].BvoisinDroit = true;
    My_Nodes[4*largeur+20].BvoisinGauche = true;
    My_Nodes[4*largeur+20].BvoisinBas = true;
    My_Nodes[4*largeur+20].BvoisinHaut = true;

    My_Nodes[4*largeur+25].BvoisinGauche = true;
    My_Nodes[4*largeur+25].BvoisinBas = true;
    My_Nodes[4*largeur+25].BvoisinHaut = true;

    // Ligne 6

    My_Nodes[6*largeur+1].BvoisinDroit = true;
    My_Nodes[6*largeur+1].BvoisinBas = true;

    My_Nodes[6*largeur+6].BvoisinGauche = true;
    My_Nodes[6*largeur+6].BvoisinBas = true;
    My_Nodes[6*largeur+6].BvoisinHaut = true;

    My_Nodes[6*largeur+8].BvoisinDroit = true;
    My_Nodes[6*largeur+8].BvoisinHaut = true;

    My_Nodes[6*largeur+12].BvoisinGauche = true;
    My_Nodes[6*largeur+12].BvoisinBas = true;

    My_Nodes[6*largeur+14].BvoisinDroit = true;
    My_Nodes[6*largeur+14].BvoisinBas = true;

    My_Nodes[6*largeur+18].BvoisinGauche = true;
    My_Nodes[6*largeur+18].BvoisinHaut = true;

    My_Nodes[6*largeur+20].BvoisinDroit = true;
    My_Nodes[6*largeur+20].BvoisinBas = true;
    My_Nodes[6*largeur+20].BvoisinHaut = true;

    My_Nodes[6*largeur+25].BvoisinGauche = true;
    My_Nodes[6*largeur+25].BvoisinHaut = true;

    // Ligne 9 :

    My_Nodes[9*largeur+8].BvoisinDroit = true;
    My_Nodes[9*largeur+8].BvoisinBas = true;

    My_Nodes[9*largeur+12].BvoisinDroit = true;
    My_Nodes[9*largeur+12].BvoisinHaut = true;
    My_Nodes[9*largeur+12].BvoisinGauche = true;

    My_Nodes[9*largeur+13].BvoisinDroit = true;
    My_Nodes[9*largeur+13].BvoisinHaut = true;
    My_Nodes[9*largeur+13].BvoisinGauche = true;
    My_Nodes[9*largeur+13].BvoisinBas = false; // A voir si on l enleve

    My_Nodes[9*largeur+14].BvoisinDroit = true;
    My_Nodes[9*largeur+14].BvoisinHaut = true;
    My_Nodes[9*largeur+14].BvoisinGauche = true;

    My_Nodes[9*largeur+18].BvoisinBas = true;
    My_Nodes[9*largeur+18].BvoisinGauche = true;

    // Ligne 12 :

    My_Nodes[12*largeur+0].BvoisinDroit = true;

    My_Nodes[12*largeur+6].BvoisinDroit = true;
    My_Nodes[12*largeur+6].BvoisinGauche = true;
    My_Nodes[12*largeur+6].BvoisinBas = true;
    My_Nodes[12*largeur+6].BvoisinHaut = true;

    My_Nodes[12*largeur+8].BvoisinHaut = true;
    My_Nodes[12*largeur+8].BvoisinGauche = true;
    My_Nodes[12*largeur+8].BvoisinBas = true;

    My_Nodes[12*largeur+11].BvoisinDroit = true;
    My_Nodes[12*largeur+12].BvoisinDroit = true;
    My_Nodes[12*largeur+13].BvoisinHaut = true;
    My_Nodes[12*largeur+14].BvoisinGauche = true;
    My_Nodes[12*largeur+15].BvoisinGauche = true;

    My_Nodes[12*largeur+18].BvoisinDroit = true;
    My_Nodes[12*largeur+18].BvoisinHaut = true;
    My_Nodes[12*largeur+18].BvoisinBas = true;

    My_Nodes[12*largeur+20].BvoisinDroit = true;
    My_Nodes[12*largeur+20].BvoisinGauche = true;
    My_Nodes[12*largeur+20].BvoisinBas = true;
    My_Nodes[12*largeur+20].BvoisinHaut = true;

    My_Nodes[12*largeur+26].BvoisinGauche = true;

    // Ligne 15 :

    My_Nodes[15*largeur+8].BvoisinDroit = true;
    My_Nodes[15*largeur+8].BvoisinBas = true;
    My_Nodes[15*largeur+8].BvoisinHaut = true;

    My_Nodes[15*largeur+18].BvoisinGauche = true;
    My_Nodes[15*largeur+18].BvoisinBas = true;
    My_Nodes[15*largeur+18].BvoisinHaut = true;

    // Ligne 17

    My_Nodes[17*largeur+1].BvoisinDroit = true;
    My_Nodes[17*largeur+1].BvoisinBas = true;

    My_Nodes[17*largeur+6].BvoisinDroit = true;
    My_Nodes[17*largeur+6].BvoisinGauche = true;
    My_Nodes[17*largeur+6].BvoisinBas = true;
    My_Nodes[17*largeur+6].BvoisinHaut = true;

    My_Nodes[17*largeur+8].BvoisinDroit = true;
    My_Nodes[17*largeur+8].BvoisinGauche = true;
    My_Nodes[17*largeur+8].BvoisinHaut = true;

    My_Nodes[17*largeur+12].BvoisinGauche = true;
    My_Nodes[17*largeur+12].BvoisinBas = true;

    My_Nodes[17*largeur+14].BvoisinDroit = true;
    My_Nodes[17*largeur+14].BvoisinBas = true;

    My_Nodes[17*largeur+18].BvoisinDroit = true;
    My_Nodes[17*largeur+18].BvoisinGauche = true;
    My_Nodes[17*largeur+18].BvoisinHaut = true;

    My_Nodes[17*largeur+20].BvoisinDroit = true;
    My_Nodes[17*largeur+20].BvoisinGauche = true;
    My_Nodes[17*largeur+20].BvoisinBas = true;
    My_Nodes[17*largeur+20].BvoisinHaut = true;

    My_Nodes[17*largeur+25].BvoisinGauche = true;
    My_Nodes[17*largeur+25].BvoisinBas = true;

    // Ligne 19

    My_Nodes[19*largeur+1].BvoisinDroit = true;
    My_Nodes[19*largeur+1].BvoisinHaut = true;

    My_Nodes[19*largeur+3].BvoisinGauche = true;
    My_Nodes[19*largeur+3].BvoisinBas = true;

    My_Nodes[19*largeur+6].BvoisinDroit = true;
    My_Nodes[19*largeur+6].BvoisinBas = true;
    My_Nodes[19*largeur+6].BvoisinHaut = true;

    My_Nodes[19*largeur+8].BvoisinDroit = true;
    My_Nodes[19*largeur+8].BvoisinGauche = true;
    My_Nodes[19*largeur+8].BvoisinBas = true;

    My_Nodes[19*largeur+12].BvoisinGauche = true;
    My_Nodes[19*largeur+12].BvoisinHaut = true;
    My_Nodes[19*largeur+12].BvoisinDroit = true;

    My_Nodes[19*largeur+14].BvoisinGauche = true;
    My_Nodes[19*largeur+14].BvoisinHaut = true;
    My_Nodes[19*largeur+14].BvoisinDroit = true;

    My_Nodes[19*largeur+18].BvoisinGauche = true;
    My_Nodes[19*largeur+18].BvoisinBas = true;

    My_Nodes[19*largeur+20].BvoisinGauche = true;
    My_Nodes[19*largeur+20].BvoisinBas = true;
    My_Nodes[19*largeur+20].BvoisinHaut = true;

    My_Nodes[19*largeur+23].BvoisinDroit = true;
    My_Nodes[19*largeur+23].BvoisinBas = true;

    My_Nodes[19*largeur+25].BvoisinGauche = true;
    My_Nodes[19*largeur+25].BvoisinHaut = true;

    // Ligne 21

    My_Nodes[21*largeur+1].BvoisinDroit = true;
    My_Nodes[21*largeur+1].BvoisinBas = true;

    My_Nodes[21*largeur+3].BvoisinGauche = true;
    My_Nodes[21*largeur+3].BvoisinDroit = true;
    My_Nodes[21*largeur+3].BvoisinHaut = true;

    My_Nodes[21*largeur+6].BvoisinGauche = true;
    My_Nodes[21*largeur+6].BvoisinHaut = true;

    My_Nodes[21*largeur+8].BvoisinDroit = true;
    My_Nodes[21*largeur+8].BvoisinHaut = true;

    My_Nodes[21*largeur+12].BvoisinGauche = true;
    My_Nodes[21*largeur+12].BvoisinBas = true;

    My_Nodes[21*largeur+14].BvoisinBas = true;
    My_Nodes[21*largeur+14].BvoisinDroit = true;

    My_Nodes[21*largeur+18].BvoisinGauche = true;
    My_Nodes[21*largeur+18].BvoisinHaut = true;

    My_Nodes[21*largeur+20].BvoisinDroit = true;
    My_Nodes[21*largeur+20].BvoisinHaut = true;

    My_Nodes[21*largeur+23].BvoisinDroit = true;
    My_Nodes[21*largeur+23].BvoisinGauche = true;
    My_Nodes[21*largeur+23].BvoisinHaut = true;

    My_Nodes[21*largeur+25].BvoisinGauche = true;
    My_Nodes[21*largeur+25].BvoisinBas = true;

    // Ligne 23

    My_Nodes[23*largeur+1].BvoisinDroit = true;
    My_Nodes[23*largeur+1].BvoisinHaut = true;

    My_Nodes[23*largeur+12].BvoisinGauche = true;
    My_Nodes[23*largeur+12].BvoisinDroit = true;
    My_Nodes[23*largeur+12].BvoisinHaut = true;

    My_Nodes[23*largeur+14].BvoisinGauche = true;
    My_Nodes[23*largeur+14].BvoisinDroit = true;
    My_Nodes[23*largeur+14].BvoisinHaut = true;

    My_Nodes[23*largeur+25].BvoisinGauche = true;
    My_Nodes[23*largeur+25].BvoisinHaut = true;



    Pinky.posX = 11;
    Pinky.posY = 12;
    Pinky.mood = HUNTER;

    Inky.posX = 12;
    Inky.posY = 12;
    Inky.mood = HUNTER;

    Clyde.posX = 14;
    Clyde.posY = 12;
    Clyde.mood = HUNTER;
    Clyde.dir = HAUT    ;

    Blinky.posX = 15;
    Blinky.posY = 12;
    Blinky.mood = HUNTER;

    posPacmanX = 13,
    posPacmanY = 15;

    return true;
}

void Jeu::evolue()
{
    int testX, testY;


}

int Jeu::getNbCasesX() const
{
    return largeur;
}

int Jeu::getNbCasesY() const
{
    return hauteur;
}

int Jeu::getPacmanX() const
{
    return posPacmanX;
}

int Jeu::getPacmanY() const
{
    return posPacmanY;
}

Case Jeu::getCase(int x, int y) const
{
    assert(x>=0 && x<largeur && y>=0 && y<hauteur);
    return terrain[y*largeur+x];
}

bool Jeu::posValide(int x, int y) const
{
    return ((x>=0 && x<largeur && y>=0 && y<hauteur && terrain[y*largeur+x]!= MUR)|| x < 0 || x >= largeur); //terrain[y*largeur+x]==VIDE
}

bool Jeu::deplacePacman(Direction dir)
{
    int depX[] = {-1, 1, 0, 0};
    int depY[] = {0, 0, -1, 1};
    int testX, testY;

    testX = posPacmanX + depX[dir];
    testY = posPacmanY + depY[dir];

    if (posValide(testX, testY))
    {
        posPacmanX = testX;
        posPacmanY = testY;
        return true;
    }
    else
        return false;
}


// void Jeu::SetNodeVoisinBool(Node _node)
// {
//    int i = 1;
//
    // Detection du voisin de droite
//    do {
//        if(nodes[_node.posY*largeur + _node.posX + i] == NODE) //nodes[y*largeur+x]
//        {
//            _node.BvoisinDroit = true;
//            break;
//        }
//        i++;
//    } while(nodes[_node.posY*largeur + _node.posX + i] != MUR || i < 12);
//
//    // Detection du voisin de gauche
//    do {
//        if(nodes[_node.posY*largeur + _node.posX - i] == NODE)
//        {
//             _node.BvoisinGauche = true;
//            break;
//        }
//        i++;
//    } while(nodes[_node.posY*largeur + _node.posX - i] != MUR || i < 12);
//
    // Detection du voisin de haut
//    do {
//        if(nodes[(_node.posY-1)*largeur + _node.posX] == NODE)
//        {
//             _node.BvoisinHaut = true;
//            break;
//        }
//        i++;
//    } while(nodes[(_node.posY-1)*largeur + _node.posX] != MUR || i < 12);
//
    // Detection du voisin de bas
//    do {
//        if(nodes[(_node.posY+1)*largeur + _node.posX] == NODE)
//        {
//             _node.BvoisinBas = true;
//            break;
//        }
//        i++;
//    } while(nodes[(_node.posY+1)*largeur + _node.posX] != MUR || i < 12);
//}
