#ifndef JEU_HPP
#define JEU_HPP

#include <list>
#include <thread>
#include <fmod.h>

typedef enum {VIDE, MUR, GUM, TAZ, FRUIT, NODE} Case;
typedef enum {GAUCHE, DROITE, HAUT, BAS} Direction;
typedef enum {HUNTER, HUNTED, DEAD} Mood;
typedef enum {GAME_OVER, YOU_WON, PLAYING, PAUSE}GameState;

class Jeu;

class Fantome
{
    friend class Jeu;

  protected:

  // Je n'ai pas procédé comme il l'aurait fallu afin de pouvoir faire un jeu fonctionnel avant.
  // J'ai pris connaissance des baremes trop tard

  public:
    Fantome();
    int posX, posY;
    Direction dir;
    Mood mood;

    int number; // Va permettre de numeroter les fantomes lorsques mes fonctions ne marcheront pas.

    int getPosX() const;
    int getPosY() const;
    Direction getDir() const;
    Mood getMood()const;
};

class Agent
{
    friend class Jeu;

  protected:
    int posX, posY;


  public:
    Agent();
    Direction dir;

    int getPosX() const;
    int getPosY() const;
    Direction getDir() const;
};

class Fruit
{
    friend class Jeu;

  protected:
    int posX, posY;


  public:
    Fruit();
    int getPosX() const;
    int getPosY() const;
    int WhichOne = rand()%3+1; // Permet de choisir un fruit aléatoire en début de partie
};

class Gum
{
    friend class Jeu;

  protected:
    int posX, posY;


  public:
    Gum();
    int getPosX() const;
    int getPosY() const;
    bool Alive;
};

class Node
{
    friend class Jeu;

  protected:

  public:
    Node();
    int posX, posY;

    //Node *voisinHaut;     // a l'origine, le but etait de creer un pathfinder pour l'ia des fantomes.
    //Node *voisinBas;      // Il fallait donc que les
    //Node *voisinGauche;
    //Node *voisinDroit;

    bool BvoisinHaut;
    bool BvoisinBas;
    bool BvoisinGauche;
    bool BvoisinDroit;

};

class Path
{
    friend class Jeu;

public:
    std::list<Node> nodess;
};
class Jeu
{
  protected:


  public:
    Case *terrain;
    Case *nodes;
    Node *My_Nodes;
    int largeur, hauteur; // Nombre de cases en largeur et en hauteur

    int posPacmanX, posPacmanY;
    Fantome Clyde;
    int TimerClyde;
    Fantome Inky;
    int TimerInky;
    Fantome Pinky;
    int TimerPinky;
    Fantome Blinky;
    int TimerBlinky;

    int TimerDesFantomes;

    int score;
    int mille;
    int cent;
    int dix;
    int un;

    int NombreGum;
    int NombreGumMange;
    bool GumMange;

    int NombreTaz;
    int NombreTazMange;
    bool TazMange;

    GameState Etat_Jeu;

    bool Vie_1;
    bool Vie_2;
    bool Vie_3;


    Fruit MonFruit;
    Agent MonAgent;

    FMOD_SYSTEM *system;
    FMOD_SOUND *soundPacman_death, *soundPacman_chomp, *soundPacman_eatfruit, *soundPacman_eatghost, *soundPacman_beginning;
    FMOD_RESULT result;



  public:
    Jeu();
    Jeu(const Jeu &)=delete;
    ~Jeu();

    Jeu &operator=(const Jeu &)=delete;

    bool init();
    void evolue();

    // Retourne les dimensions (en nombre de cases)
    int getNbCasesX() const;
    int getNbCasesY() const;

    // Retourne la position du Pacman
    int getPacmanX() const;
    int getPacmanY() const;

    // Retourne la case à une position donnée
    Case getCase(int, int) const;

    // Indique si la case à une position donnée existe et est vide
    // (Pacman ou les fantomes peuvent l'occuper)
    bool posValide(int, int) const;

    // Déplace Pacman dans une direction (si la case à atteindre est valide)
    bool deplacePacman(Direction);

    // void SetNodeVoisin(Node node);
    // void SetNodeVoisinBool(Node _node); // Tentative qui n'a pas fonctionne pour automatiser l initialisation des voisins

    //
};

#endif
