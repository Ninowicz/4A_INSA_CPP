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
    posXpre = -1;  posYpre = -1;
    dir = BAS;
    dirprecedente = HAUT;
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
	int x, y;
	//list<Fantome>::iterator itFantome;
	//list<Gum>::iterator itGum;


	const char terrain_defaut[25][28] = {
		"###########################",
		"#gggggggggggg#gggggggggggg#",
		"#g####g#####g#g#####g####g#",
		"#t####g#####g#g#####g####t#",
		"#ggggggggggggggggggggggggg#",
		"#g####g#g#########g#g####g#",
		"#gggggg#ggggg#ggggg#gggggg#",
		"######g####..#..####g######",
		"######g####..#..####g######",
		".....#g#...........#g#.....",
		".....#g#.####.####.#g#.....",
		"######g#.#.......#.#g######",
		"......g..#.......#..g......",
		"######g#.#.......#.#g######",
		".....#g#.#########.#g#.....",
		".....#g#...........#g#.....",
		"######g#..#######..#g######",
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
                terrain[y*largeur+x] = GUM;
            else if (terrain_defaut[y][x]=='t')
                terrain[y*largeur+x] = TAZ;
            else if (terrain_defaut[y][x]=='f')
                terrain[y*largeur+x] = FRUIT;
            else
                terrain[y*largeur+x] = VIDE;
    //Pinky();
    //Blinky();
    //Inky();
    //Clyde();

    Pinky.posX = 11;
    Pinky.posY = 12;
    Pinky.mood = HUNTER;

    Inky.posX = 12;
    Inky.posY = 12;
    Inky.mood = HUNTER;

    Clyde.posX = 14;
    Clyde.posY = 12;
    Clyde.mood = HUNTER;

    Blinky.posX = 15;
    Blinky.posY = 12;
    Blinky.mood = HUNTER;


    //fantomes.resize(10);
	//for (itFantome=fantomes.begin(); itFantome!=fantomes.end(); itFantome++)
    //{
    //    do {
    //      x = rand()%largeur;
    //        y = rand()%hauteur;
    //    } while (terrain[y*largeur+x]!=VIDE);
    //    itFantome->posX = x;
    //    itFantome->posY = y;
    //   itFantome->dir = (Direction)(rand()%4);
    //}

    //MonFruit.posX = 13;
    //MonFruit.posY = 19;

    posPacmanX = 13,
    posPacmanY = 15;



    return true;
}

void Jeu::evolue()
{
    int testX, testY;
	//list<Fantome>::iterator itFantome;

    //int depX[] = {-1, 1, 0, 0};
    //int depY[] = {0, 0, -1, 1};

    //for (itFantome=fantomes.begin(); itFantome!=fantomes.end(); itFantome++)
    //{
    //    testX = itFantome->posX + depX[itFantome->dir];
    //    testY = itFantome->posY + depY[itFantome->dir];
    //
    //    if (terrain[testY*largeur+testX]!=MUR)
    //    {
    //        itFantome->posX = testX;
    //        itFantome->posY = testY;
    //    }
    //    else
     //       // Changement de direction
    //        itFantome->dir = (Direction)(rand()%4);
    //}

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
