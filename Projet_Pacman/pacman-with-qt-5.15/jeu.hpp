#ifndef JEU_HPP
#define JEU_HPP

#include <list>

typedef enum {VIDE, MUR, GUM, TAZ, FRUIT} Case;
typedef enum {GAUCHE, DROITE, HAUT, BAS} Direction;
typedef enum {HUNTER, HUNTED, DEAD} Mood;

class Jeu;

class Fantome
{
    friend class Jeu;

  protected:

    Direction dir;



  public:
    Fantome();
    int posX, posY;
    Mood mood;
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
    Direction dirprecedente;
    int posXpre, posYpre;

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
    int WhichOne = rand()%3+1;
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

class Jeu
{
  protected:


    //int posPacmanX, posPacmanY;

  public:
    Case *terrain;
    int largeur, hauteur; // Nombre de cases en largeur et en hauteur
    //std::list<Fantome> fantomes;
    int posPacmanX, posPacmanY;
    Fantome Clyde;
    Fantome Inky;
    Fantome Pinky;
    Fantome Blinky;

    int score;
    int mille;
    int cent;
    int dix;
    int un;

    bool Vie_1;
    bool Vie_2;
    bool Vie_3;



    Fruit MonFruit;
    Agent MonAgent;

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

    //
};

#endif
