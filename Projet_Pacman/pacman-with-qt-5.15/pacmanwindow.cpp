#include <iostream>
#include "pacmanwindow.hpp"

using namespace std;


PacmanWindow::PacmanWindow(QWidget *pParent, Qt::WindowFlags flags):QFrame(pParent, flags)
{



    // Taille des cases en pixels
    int largeurCase, hauteurCase;

    if (pixmapBkgnd.load("./data/bkgnd.bmp")==false)
    {
        cout<<"Impossible d'ouvrir bkgnd.png"<<endl;
        exit(-1);
    }

    if (pixmapPacman_Up.load("./data/pacman/pacman_up.bmp")==false)
    {
        cout<<"Impossible d'ouvrir pacman_up.png"<<endl;
        exit(-1);
    }

    if (pixmapPacman_Down.load("./data/pacman/pacman_down.bmp")==false)
    {
        cout<<"Impossible d'ouvrir pacman_down.png"<<endl;
        exit(-1);
    }

    if (pixmapPacman_Left.load("./data/pacman/pacman_left.bmp")==false)
    {
        cout<<"Impossible d'ouvrir pacman_left.png"<<endl;
        exit(-1);
    }

    if (pixmapPacman_Right.load("./data/pacman/pacman_right.bmp")==false)
    {
        cout<<"Impossible d'ouvrir pacman_right.png"<<endl;
        exit(-1);
    }

    if (pixmapMur.load("./data/Mur2.bmp")==false)
    {
        cout<<"Impossible d'ouvrir mur.bmp"<<endl;
        exit(-1);
    }

    if (pixmapFruit_Cerise.load("./data/Fruits/cerise.bmp")==false)
    {
        cout<<"Impossible d'ouvrir cerise.png"<<endl;
        exit(-1);
    }

    if (pixmapFruit_Aubergine.load("./data/Fruits/Aubergine.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Aubergine.png"<<endl;
        exit(-1);
    }

    if (pixmapFruit_Peche.load("./data/Fruits/peche.bmp")==false)
    {
        cout<<"Impossible d'ouvrir peche.png"<<endl;
        exit(-1);
    }

    if (pixmapPinky_Up.load("./data/Fantomes/Pinky/Pinky_Up.bmp")==false)
    {
        cout<<"Impossible d'ouvrir peche1.png"<<endl;
        exit(-1);
    }

    if (pixmapPinky_Down.load("./data/Fantomes/Pinky/Pinky_Down.bmp")==false)
    {
        cout<<"Impossible d'ouvrir peche2.png"<<endl;
        exit(-1);
    }

    if (pixmapPinky_Left.load("./data/Fantomes/Pinky/Pinky_Left.bmp")==false)
    {
        cout<<"Impossible d'ouvrir peche3.png"<<endl;
        exit(-1);
    }

    if (pixmapPinky_Right.load("./data/Fantomes/Pinky/Pinky_Right.bmp")==false)
    {
        cout<<"Impossible d'ouvrir peche4.png"<<endl;
        exit(-1);
    }
    // Clyde
    if (pixmapClyde_Up.load("./data/Fantomes/Clyde/Clyde_Up.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapClyde_Down.load("./data/Fantomes/Clyde/Clyde_Down.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapClyde_Left.load("./data/Fantomes/Clyde/Clyde_Left.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapClyde_Right.load("./data/Fantomes/Clyde/Clyde_Right.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    // Inky
    if (pixmapInky_Up.load("./data/Fantomes/Inky/Inky_Up.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapInky_Down.load("./data/Fantomes/Inky/Inky_Down.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapInky_Left.load("./data/Fantomes/Inky/Inky_Left.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapInky_Right.load("./data/Fantomes/Inky/Inky_Right.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }
    // Blinky
    if (pixmapBlinky_Up.load("./data/Fantomes/Blinky/Blinky_Up.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapBlinky_Down.load("./data/Fantomes/Blinky/Blinky_Down.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapBlinky_Left.load("./data/Fantomes/Blinky/Blinky_Left.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    if (pixmapBlinky_Right.load("./data/Fantomes/Blinky/Blinky_Right.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Clyde.png"<<endl;
        exit(-1);
    }

    // Dessin Gum
    if (pixmapGum.load("./data/GumBall.bmp")==false)
    {
        cout<<"Impossible d'ouvrir GumBall.png"<<endl;
        exit(-1);
    }

    if (pixmapTaz.load("./data/Taz.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Taz.png"<<endl;
        exit(-1);
    }

    if (pixmapScore.load("./data/score/score.bmp")==false)
    {
        cout<<"Impossible d'ouvrir score.png"<<endl;
        exit(-1);
    }

    if (pixmap1.load("./data/score/1.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 1.png"<<endl;
        exit(-1);
    }

    if (pixmap2.load("./data/score/2.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 2.png"<<endl;
        exit(-1);
    }

    if (pixmap3.load("./data/score/3.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 3.png"<<endl;
        exit(-1);
    }

    if (pixmap4.load("./data/score/4.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 4.png"<<endl;
        exit(-1);
    }

    if (pixmap5.load("./data/score/5.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 5.png"<<endl;
        exit(-1);
    }

    if (pixmap6.load("./data/score/6.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 6.png"<<endl;
        exit(-1);
    }

    if (pixmap7.load("./data/score/7.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 7.png"<<endl;
        exit(-1);
    }

    if (pixmap8.load("./data/score/8.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 8.png"<<endl;
        exit(-1);
    }

    if (pixmap9.load("./data/score/9.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 9.png"<<endl;
        exit(-1);
    }

    if (pixmap0.load("./data/score/0.bmp")==false)
    {
        cout<<"Impossible d'ouvrir 0.png"<<endl;
        exit(-1);
    }

    if (pixmapFantome_Scared.load("./data/fantome_scared.bmp")==false)
    {
        cout<<"Impossible d'ouvrir scared.png"<<endl;
        exit(-1);
    }

    if (pixmapGameOver.load("./data/GameState/GameOver.bmp")==false)
    {
        cout<<"Impossible d'ouvrir GameOVer.png"<<endl;
        exit(-1);
    }
    if (pixmapPressAnyKey.load("./data/GameState/PressAnyKey.bmp")==false)
    {
        cout<<"Impossible d'ouvrir PressAnyKey.png"<<endl;
        exit(-1);
    }
    if (pixmapPressR.load("./data/GameState/PressR.bmp")==false)
    {
        cout<<"Impossible d'ouvrir PressR.png"<<endl;
        exit(-1);
    }

    if (pixmapFantome_Dead.load("./data/Dead.bmp")==false)
    {
        cout<<"Impossible d'ouvrir Dead.png"<<endl;
        exit(-1);
    }

    jeu.init();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &PacmanWindow::handleTimer);
    timer->start(125);                                                      // duree de boucle

    largeurCase = pixmapMur.width();
    hauteurCase = pixmapMur.height();

    resize(jeu.getNbCasesX()*(largeurCase+8), jeu.getNbCasesY()*hauteurCase);
    PacmanWindow::ScoreHandler();
    FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_beginning, 0, NULL);


}

void PacmanWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //list<Fantome>::const_iterator itFantome;
    int x, y;

    // Taille des cases en pixels
    int largeurCase, hauteurCase;

    largeurCase = pixmapMur.width();
    hauteurCase = pixmapMur.height();
    // Dessine les cases
        for (y=0;y<jeu.getNbCasesY();y++)
            for (x=0;x<jeu.getNbCasesX();x++)
                    painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapBkgnd);


    if( jeu.Etat_Jeu == PLAYING)
    {
               // Dessine les cases
        for (y=0;y<jeu.getNbCasesY();y++)
            for (x=0;x<jeu.getNbCasesX();x++)
                if (jeu.getCase(x,y)==MUR)
                    painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapMur);
        // Dessine les Gumballz
        for (y=0;y<jeu.getNbCasesY();y++)
            for (x=0;x<jeu.getNbCasesX();x++)
                if (jeu.getCase(x,y)== GUM)
                {
                    painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapGum);
                }


        // Dessine les Tazballz
        for (y=0;y<jeu.getNbCasesY();y++)
            for (x=0;x<jeu.getNbCasesX();x++)
                if (jeu.getCase(x,y)== TAZ)
                    painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapTaz);
    }


    // Dessine les fantomes

    // Dessine Pinky
    if(jeu.Etat_Jeu != GAME_OVER)
    {
        if(jeu.Pinky.getMood() == HUNTER)
        {
           if(jeu.Pinky.getDir() == HAUT){
                painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Up);
            }
            if(jeu.Pinky.getDir() == BAS){
                painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Down);
            }
            if(jeu.Pinky.getDir() == GAUCHE){
                painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Left);
            }
            if(jeu.Pinky.getDir() == DROITE){
                painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Right);
            }
        }
        else if(jeu.Pinky.getMood() == HUNTED)
        {
            if(jeu.TimerPinky == 44 || jeu.TimerPinky == 46 || jeu.TimerPinky == 48 )
            {
                if(jeu.Pinky.getDir() == HAUT){
                    painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Up);
                }
                if(jeu.Pinky.getDir() == BAS){
                    painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Down);
                }
                if(jeu.Pinky.getDir() == GAUCHE){
                    painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Left);
                }
                if(jeu.Pinky.getDir() == DROITE){
                    painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapPinky_Right);
                }
            }
            else
                painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapFantome_Scared);

        }
        else if(jeu.Pinky.getMood() == DEAD)
        {
            painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapFantome_Dead);
        }

        // Dessine Inky

        if(jeu.Inky.getMood() == HUNTER)
        {
            if(jeu.Inky.getDir() == HAUT){
                painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Up);
            }
            if(jeu.Inky.getDir() == BAS){
                painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Down);
            }
            if(jeu.Inky.getDir() == GAUCHE){
                painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Left);
            }
            if(jeu.Inky.getDir() == DROITE){
                painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Right);
            }
        }
        else if(jeu.Inky.getMood() == HUNTED)
        {
            if(jeu.TimerInky == 44 || jeu.TimerInky == 46 || jeu.TimerInky == 48 )
            {
                if(jeu.Inky.getDir() == HAUT){
                    painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Up);
                }
                if(jeu.Inky.getDir() == BAS){
                    painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Down);
                }
                if(jeu.Inky.getDir() == GAUCHE){
                    painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Left);
                }
                if(jeu.Inky.getDir() == DROITE){
                    painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapInky_Right);
                }
            }
            else
                painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapFantome_Scared);

        }
        else if(jeu.Inky.getMood() == DEAD)
        {
            painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapFantome_Dead);
        }

        // Dessine Clyde

        if(jeu.Clyde.getMood() == HUNTER)
        {
            if(jeu.Clyde.getDir() == HAUT){
                painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Up);
            }
            if(jeu.Clyde.getDir() == BAS){
                painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Down);
            }
            if(jeu.Clyde.getDir() == GAUCHE){
                painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Left);
            }
            if(jeu.Clyde.getDir() == DROITE){
                painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Right);
            }
        }
        else if(jeu.Clyde.getMood() == HUNTED)
        {
            if(jeu.TimerClyde == 44 || jeu.TimerClyde == 46 || jeu.TimerClyde == 48 )
            {
                if(jeu.Clyde.getDir() == HAUT){
                    painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Up);
                }
                if(jeu.Clyde.getDir() == BAS){
                    painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Down);
                }
                if(jeu.Clyde.getDir() == GAUCHE){
                    painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Left);
                }
                if(jeu.Clyde.getDir() == DROITE){
                    painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapClyde_Right);
                }
            }
            else
                painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapFantome_Scared);


        }
        else if(jeu.Clyde.getMood() == DEAD)
        {
            painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapFantome_Dead);
        }

        // Dessine Blinky

        if(jeu.Blinky.getMood() == HUNTER)
        {
            if(jeu.Blinky.getDir() == HAUT){
                painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Up);
            }
            if(jeu.Blinky.getDir() == BAS){
                painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Down);
            }
            if(jeu.Blinky.getDir() == GAUCHE){
                painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Left);
            }
            if(jeu.Blinky.getDir() == DROITE){
                painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Right);
            }
        }
        else if(jeu.Blinky.getMood() == HUNTED)
        {
            if(jeu.TimerBlinky == 44 || jeu.TimerBlinky == 46 || jeu.TimerBlinky == 48 )
            {
                if(jeu.Blinky.getDir() == HAUT){
                    painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Up);
                }
                if(jeu.Blinky.getDir() == BAS){
                    painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Down);
                }
                if(jeu.Blinky.getDir() == GAUCHE){
                    painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Left);
                }
                if(jeu.Blinky.getDir() == DROITE){
                    painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapBlinky_Right);
                }
            }
            else
                painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapFantome_Scared);
        }
        else if(jeu.Blinky.getMood() == DEAD)
        {
            painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapFantome_Dead);
        }

    }


    // Dessine pacman
    if(jeu.Vie_1 == true)
    {
        if(jeu.MonAgent.dir == HAUT){
            painter.drawPixmap(jeu.getPacmanX()*largeurCase, jeu.getPacmanY()*hauteurCase, pixmapPacman_Up);
        }
        if(jeu.MonAgent.dir == BAS){
            painter.drawPixmap(jeu.getPacmanX()*largeurCase, jeu.getPacmanY()*hauteurCase, pixmapPacman_Down);
        }
        if(jeu.MonAgent.dir == DROITE){
            painter.drawPixmap(jeu.getPacmanX()*largeurCase, jeu.getPacmanY()*hauteurCase, pixmapPacman_Left);
        }
        if(jeu.MonAgent.dir == GAUCHE){
            painter.drawPixmap(jeu.getPacmanX()*largeurCase, jeu.getPacmanY()*hauteurCase, pixmapPacman_Right);
        }
    }

    else if(jeu.Etat_Jeu == GAME_OVER)
        painter.drawPixmap(8*32, 9*32, pixmapGameOver);

    if(jeu.Etat_Jeu == PAUSE||jeu.Etat_Jeu == GAME_OVER)
         painter.drawPixmap(8*32, 15*32, pixmapPressAnyKey);
    else if(jeu.Etat_Jeu == YOU_WON)
         painter.drawPixmap(8*32, 15*32, pixmapPressR);



	// Dessine les fruits
	if (jeu.terrain[19*jeu.largeur+13] == FRUIT && jeu.Etat_Jeu == PLAYING)
    {
        switch(jeu.MonFruit.WhichOne)
        {
            case 1 : painter.drawPixmap(13*largeurCase, 19*hauteurCase, pixmapFruit_Aubergine);
            break;
            case 2 : painter.drawPixmap(13*largeurCase, 19*hauteurCase, pixmapFruit_Cerise);
            break;
            case 3 : painter.drawPixmap(13*largeurCase, 19*hauteurCase, pixmapFruit_Peche);
            break;
        }
    }

    // Dessine le Score
     painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 1*largeurCase, pixmapScore);

    // Dessine les Digits
    switch(jeu.mille)
    {
        case 0 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap0);
        break;
        case 1 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap1);
        break;
        case 2 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap2);
        break;
        case 3 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap3);
        break;
        case 4 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap4);
        break;
        case 5 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap5);
        break;
        case 6 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap6);
        break;
        case 7 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap7);
        break;
        case 8 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap8);
        break;
        case 9 : painter.drawPixmap((jeu.largeur+ 1)*largeurCase, 2*largeurCase, pixmap9);
        break;

    }
    switch(jeu.cent)
    {
        case 0 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap0);
        break;
        case 1 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap1);
        break;
        case 2 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap2);
        break;
        case 3 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap3);
        break;
        case 4 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap4);
        break;
        case 5 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap5);
        break;
        case 6 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap6);
        break;
        case 7 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap7);
        break;
        case 8 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap8);
        break;
        case 9 : painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 2*largeurCase, pixmap9);
        break;

    }
    switch(jeu.dix)
    {
        case 0 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap0);
        break;
        case 1 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap1);
        break;
        case 2 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap2);
        break;
        case 3 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap3);
        break;
        case 4 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap4);
        break;
        case 5 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap5);
        break;
        case 6 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap6);
        break;
        case 7 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap7);
        break;
        case 8 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap8);
        break;
        case 9 : painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 2*largeurCase, pixmap9);
        break;

    }
    switch(jeu.un)
    {
        case 0 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap0);
        break;
        case 1 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap1);
        break;
        case 2 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap2);
        break;
        case 3 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap3);
        break;
        case 4 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap4);
        break;
        case 5 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap5);
        break;
        case 6 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap6);
        break;
        case 7 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap7);
        break;
        case 8 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap8);
        break;
        case 9 : painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 2*largeurCase, pixmap9);
        break;

    }
    if(jeu.Vie_1 == true)
    {
        painter.drawPixmap((jeu.largeur+ 2)*largeurCase, 4*largeurCase, pixmapPacman_Left);
    }
    if(jeu.Vie_2 == true)
    {
        painter.drawPixmap((jeu.largeur+ 3)*largeurCase, 4*largeurCase, pixmapPacman_Left);
    }
    if(jeu.Vie_3 == true)
    {
        painter.drawPixmap((jeu.largeur+ 4)*largeurCase, 4*largeurCase, pixmapPacman_Left);
    }
}

void PacmanWindow::keyPressEvent(QKeyEvent *event)
{
    if(jeu.Etat_Jeu == PLAYING)
    {
        if (event->key()==Qt::Key_Left)
        {
            jeu.MonAgent.dir = GAUCHE;
            PacmanWindow::LifeHandler();
        }
        else if (event->key()==Qt::Key_Right)
        {
            jeu.MonAgent.dir = DROITE;
            PacmanWindow::LifeHandler();
        }

        else if (event->key()==Qt::Key_Up)
        {
            jeu.MonAgent.dir = HAUT;
            PacmanWindow::LifeHandler();

        }

        else if (event->key()==Qt::Key_Down)
        {
            jeu.MonAgent.dir = BAS;
            PacmanWindow::LifeHandler();
        }
        else if (event->key()==Qt::Key_A)
        {
            jeu.MonAgent.dir = BAS;
            jeu.init();
        }
    }

    else if (jeu.Etat_Jeu == GAME_OVER)
    {
        if (event->key()!=Qt::Key_Shift || event->key()==Qt::Key_Shift)
        {
            jeu.MonAgent.dir = BAS;
            jeu.init();
            FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_beginning, 0, NULL);
        }
    }
    else if(jeu.Etat_Jeu == PAUSE)
    {
        if (event->key()!=Qt::Key_Shift || event->key()==Qt::Key_Shift) // pour pouvoir appuyer sur n'importe quelle touche
            jeu.Etat_Jeu = PLAYING;
    }
    else if(jeu.Etat_Jeu==YOU_WON)
    {
        if (event->key()==Qt::Key_R)
            jeu.init();
            FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_beginning, 0, NULL);
    }
    //update();
}

void PacmanWindow::handleTimer()
{

    if(jeu.Etat_Jeu == PLAYING)
    {
    jeu.evolue();
    jeu.deplacePacman(jeu.MonAgent.dir);
    PacmanWindow::GumHandler();
    PacmanWindow::TazHandler();
    PacmanWindow::FruitHandler();
    PacmanWindow::LifeHandler();
    PacmanWindow::Teleportation();

    if(jeu.Clyde.mood != DEAD)
        jeu.Clyde.dir = PacmanWindow::DetecteFantomeToNode(jeu.Clyde);
    if(jeu.Inky.mood != DEAD)
        jeu.Inky.dir = PacmanWindow::DetecteFantomeToNode(jeu.Inky);
    if(jeu.Blinky.mood != DEAD)
        jeu.Blinky.dir = PacmanWindow::DetecteFantomeToNode(jeu.Blinky);
    if(jeu.Pinky.mood != DEAD)
        jeu.Pinky.dir = PacmanWindow::DetecteFantomeToNode(jeu.Pinky);

    if(jeu.Blinky.mood == DEAD)
    {
        jeu.Blinky.dir = PacmanWindow::DeplaceFantomeMort(jeu.Blinky);
        PacmanWindow::DeplaceBlinky();
    }
    else if(jeu.TimerBlinky % 2 == 0)
        PacmanWindow::DeplaceBlinky();

    if(jeu.Inky.mood == DEAD)
    {
         jeu.Inky.dir = PacmanWindow::DeplaceFantomeMort(jeu.Inky);
         PacmanWindow::DeplaceInky();
    }
    else if(jeu.TimerInky % 2 == 0)
        PacmanWindow::DeplaceInky();

    if(jeu.Clyde.mood == DEAD)
    {
        jeu.Clyde.dir = PacmanWindow::DeplaceFantomeMort(jeu.Clyde);
        PacmanWindow::DeplaceClyde();
    }
    else if(jeu.TimerClyde %2 == 0)
        PacmanWindow::DeplaceClyde();

    if(jeu.Pinky.mood == DEAD)
    {
        jeu.Pinky.dir = PacmanWindow::DeplaceFantomeMort(jeu.Pinky);
        PacmanWindow::DeplacePinky();
    }
    else if(jeu.TimerPinky %2 == 0)
        PacmanWindow::DeplacePinky();

    PacmanWindow::LifeHandler();

    PacmanWindow::TimeManagerGhost(jeu.Pinky);
    PacmanWindow::TimeManagerGhost(jeu.Inky);
    PacmanWindow::TimeManagerGhost(jeu.Blinky);
    PacmanWindow::TimeManagerGhost(jeu.Clyde);

    PacmanWindow::TransformFantomeBackToHunter();

    PacmanWindow::EtatJeu();
    }

    update();
}

void PacmanWindow::GumHandler()
{
    if(jeu.terrain[jeu.getPacmanY()*jeu.largeur+jeu.getPacmanX()] == GUM){
        jeu.terrain[jeu.getPacmanY()*jeu.largeur+jeu.getPacmanX()] = VIDE;
        jeu.score = jeu.score + 5;
        jeu.NombreGumMange = jeu.NombreGumMange +1;
        FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_chomp, 0, NULL);
        PacmanWindow::ScoreHandler();
    }

    update();

}

void PacmanWindow::TazHandler()
{
    if(jeu.terrain[jeu.getPacmanY()*jeu.largeur+jeu.getPacmanX()] == TAZ)
    {
        jeu.terrain[jeu.getPacmanY()*jeu.largeur+jeu.getPacmanX()] = VIDE;
        jeu.score = jeu.score + 25;
        FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_chomp, 0, NULL);
        PacmanWindow::ScoreHandler();
        jeu.NombreTazMange = jeu.NombreTazMange +1;
        if(jeu.Pinky.mood != DEAD)
            jeu.Pinky.mood = HUNTED;
        jeu.TimerPinky = 0;
        if(jeu.Inky.mood != DEAD)
            jeu.Inky.mood = HUNTED;
        jeu.TimerInky = 0;
        if(jeu.Blinky.mood != DEAD)
            jeu.Blinky.mood = HUNTED;
        jeu.TimerBlinky = 0;
        if(jeu.Clyde.mood != DEAD)
            jeu.Clyde.mood = HUNTED;
        jeu.TimerClyde = 0;
    }
    update();
}

void PacmanWindow::FruitHandler()
{
    if(jeu.terrain[jeu.getPacmanY()*jeu.largeur+jeu.getPacmanX()] == FRUIT)
    {
        jeu.terrain[19*jeu.largeur+13] = VIDE;
        jeu.score = jeu.score + 75;
        PacmanWindow::ScoreHandler();
    }

    update();

}

void PacmanWindow::ScoreHandler()
{
    jeu.mille = ((jeu.score - jeu.score % 1000) / 1000);
    jeu.cent = ((jeu.score - jeu.mille * 1000 - jeu.score % 100) / 100);
    jeu.dix = (((jeu.score - jeu.mille * 1000 - jeu.cent * 100) - jeu.score % 10) / 10);
    jeu.un = jeu.score % 10;
    update();
}

void PacmanWindow::LifeHandler()
{
    int x[4] = {jeu.Pinky.getPosX(), jeu.Inky.getPosX(), jeu.Clyde.getPosX(), jeu.Blinky.getPosX()};
    int y[4] = {jeu.Pinky.getPosY(), jeu.Inky.getPosY(), jeu.Clyde.getPosY(), jeu.Blinky.getPosY()};
    Mood MoodDesBebou[4] = {jeu.Pinky.getMood(), jeu.Inky.getMood(), jeu.Clyde.getMood(), jeu.Blinky.getMood()};

    for(int i = 0 ; i < 4 ; i++)
    {
       if(jeu.getPacmanX() == x[i] && jeu.getPacmanY() == y[i] && MoodDesBebou[i] == HUNTER)
        {
            if(jeu.Vie_1 && jeu.Vie_2 && jeu.Vie_3)
            {
                PacmanWindow::Respawn();
                jeu.Vie_3 = false;
                FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_death, 0, NULL);
            }

            else if(jeu.Vie_1 && jeu.Vie_2)
            {
                FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_death, 0, NULL);
                PacmanWindow::Respawn();
                jeu.Vie_2 = false;
            }
            else if(jeu.Vie_1)
            {
                FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_death, 0, NULL);
                PacmanWindow::Respawn();
                jeu.Vie_1 = false;
            }
        }
        if(jeu.getPacmanX() == x[i] && jeu.getPacmanY() == y[i] && MoodDesBebou[i] == HUNTED)
        {
            switch(i)
            {
                case 0 :
                    {
                        FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_eatghost, 0, NULL);
                        jeu.score = jeu.score + 200;
                        jeu.Pinky.mood = DEAD;
                        jeu.TimerPinky = 0;
                    }
                break;
                case 1 :
                    {
                        FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_eatghost, 0, NULL);
                        jeu.score = jeu.score + 200;
                        jeu.Inky.mood = DEAD;
                        jeu.TimerInky = 0;
                    }
                break;
                case 2 :
                    {
                        FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_eatghost, 0, NULL);
                        jeu.score = jeu.score + 200;
                        jeu.Clyde.mood = DEAD;
                        jeu.TimerClyde = 0;
                    }
                break;
                case 3 :
                    {
                        FMOD_System_PlaySound(jeu.system, FMOD_CHANNEL_FREE, jeu.soundPacman_eatghost, 0, NULL);
                        jeu.score = jeu.score + 200;
                        jeu.Blinky.mood = DEAD;
                        jeu.TimerBlinky = 0;
                    }
                break;
            }
            PacmanWindow::ScoreHandler();
        }
    }
}

void PacmanWindow::Respawn()
{
    jeu.Blinky.posX =15;
    jeu.Blinky.posY =12;
    jeu.Blinky.mood = HUNTER;
    jeu.Blinky.dir = BAS;

    jeu.Clyde.posX =14;
    jeu.Clyde.posY =12;
    jeu.Clyde.mood = HUNTER;
    jeu.Clyde.dir = BAS;

    jeu.Inky.posX =12;
    jeu.Inky.posY =12;
    jeu.Inky.mood = HUNTER;
    jeu.Inky.dir = BAS;

    jeu.Pinky.posX = 11;
    jeu.Pinky.posY =12;
    jeu.Pinky.mood = HUNTER;
    jeu.Pinky.dir = BAS;

    jeu.posPacmanX = 13;
    jeu.posPacmanY =15;
    jeu.MonAgent.dir = HAUT;
}

void PacmanWindow::EtatJeu()
{
    // GAME OVER

    if (!jeu.Vie_1 == true)
    {
        jeu.posPacmanX = 0;
        jeu.posPacmanY = 0;

        jeu.Etat_Jeu = GAME_OVER;
    }
    // YOU WON
    if(jeu.NombreGumMange == jeu.NombreGum && jeu.NombreTazMange == jeu.NombreTaz)
        jeu.Etat_Jeu = YOU_WON ;
}

void PacmanWindow::Teleportation()
{
    if(jeu.posPacmanX < 0)
    {
        jeu.posPacmanX = jeu.largeur-1;
    }
    if(jeu.posPacmanX >= jeu.largeur)
    {
        jeu.posPacmanX = 0;
    }
}

Direction PacmanWindow::DetecteFantomeToNode(Fantome fantomas)
{
    bool DirDroite = false ;
    bool DirGauche = false ;
    bool DirHaut = false ;
    bool DirBas = false ;
    std::list<Direction> MesDirections;

    if(jeu.nodes[fantomas.posY*jeu.largeur+fantomas.posX] == NODE)
    {
        if(jeu.My_Nodes[fantomas.posY*jeu.largeur+fantomas.posX].BvoisinHaut == true) //if(jeu.My_Nodes[fantomas.posY*jeu.largeur+fantomas.posX].voisinHaut != NULL)
        {
            DirHaut = true ;
            MesDirections.push_back(HAUT);
        }
        if(jeu.My_Nodes[fantomas.posY*jeu.largeur+fantomas.posX].BvoisinBas == true )
        {
            DirBas = true ;
             MesDirections.push_back(BAS);
        }
        if(jeu.My_Nodes[fantomas.posY*jeu.largeur+fantomas.posX].BvoisinGauche == true)
        {
            DirGauche = true ;
             MesDirections.push_back(GAUCHE);
        }
        if(jeu.My_Nodes[fantomas.posY*jeu.largeur+fantomas.posX].BvoisinDroit == true)
        {
            DirDroite = true ;
            MesDirections.push_back(DROITE);
        }

        Direction RetourEnArriere = PacmanWindow::AncienneDirectionOpposee(fantomas.dir);
        if(MesDirections.size() > 1)
        {
            if(DirDroite == true && RetourEnArriere == DROITE )
                MesDirections.remove(RetourEnArriere);
            else if(DirHaut == true && RetourEnArriere == HAUT )
                MesDirections.remove(RetourEnArriere);
            else if(DirGauche == true && RetourEnArriere == GAUCHE )
                MesDirections.remove(RetourEnArriere);
            else if(DirBas == true && RetourEnArriere == BAS )
                MesDirections.remove(RetourEnArriere);

        }



        int Desepoir = rand()%MesDirections.size();
        for(int i = 0; i<Desepoir;i++)
        {
            MesDirections.pop_back();
        }
        Direction DirAreturn = MesDirections.back();
        return MesDirections.back();
        MesDirections.clear();


    }
    else
        return fantomas.dir;
}

Direction PacmanWindow::AncienneDirectionOpposee(Direction _direction)
{
    if(_direction == HAUT)
        return BAS;
    else if(_direction == BAS)
        return HAUT;
    else if(_direction == GAUCHE)
        return DROITE;
    else if(_direction == DROITE)
        return GAUCHE;

}

void PacmanWindow::TimeManagerGhost(Fantome _fantome)
{
    if(_fantome.getMood() == HUNTED)
    {
       switch (_fantome.number)
       {
           case 0 : jeu.TimerClyde ++;
           if(jeu.TimerClyde > jeu.TimerDesFantomes)
            {
                jeu.Clyde.mood = HUNTER;
                jeu.TimerClyde = 0;
            }
           break;
           case 1 : jeu.TimerPinky ++;
           if(jeu.TimerPinky > jeu.TimerDesFantomes)
            {
                jeu.Pinky.mood = HUNTER;
                jeu.TimerPinky = 0;
            }
           break;
           case 2 : jeu.TimerBlinky++;
           if(jeu.TimerBlinky > jeu.TimerDesFantomes)
            {
                jeu.Blinky.mood = HUNTER;
                jeu.TimerBlinky = 0;
            }
           break;
           case 3 : jeu.TimerInky ++;
           if(jeu.TimerInky > jeu.TimerDesFantomes)
            {
                jeu.Inky.mood = HUNTER;
                jeu.TimerInky = 0;
            }
           break;
       }
    }
}

void PacmanWindow::DeplaceFantome()
{
    Fantome Mes_fantomes[4] = {jeu.Blinky, jeu.Pinky, jeu.Inky, jeu.Clyde};
    int testX, testY;
    int depX[] = {-1, 1, 0, 0};
    int depY[] = {0, 0, -1, 1};

    for(int i=0 ; i<4 ; i++)
    {

        testX = Mes_fantomes[i].posX + depX[Mes_fantomes[i].dir];
        testY = Mes_fantomes[i].posY + depY[Mes_fantomes[i].dir];

        if (jeu.terrain[testY*jeu.largeur+testX]!=MUR)
        {
            Mes_fantomes[i].posX = testX;
            Mes_fantomes[i].posY = testY;
        }

    }
}

void PacmanWindow::DeplaceBlinky()
{
    int testX, testY;
    int depX[] = {-1, 1, 0, 0};
    int depY[] = {0, 0, -1, 1};



    testX = jeu.Blinky.posX + depX[jeu.Blinky.dir];
    testY = jeu.Blinky.posY + depY[jeu.Blinky.dir];

    if (jeu.terrain[testY*jeu.largeur+testX]!=MUR)
    {
        jeu.Blinky.posX = testX;
        jeu.Blinky.posY = testY;
    }


}

void PacmanWindow::DeplaceClyde()
{
    int testX, testY;
    int depX[] = {-1, 1, 0, 0};
    int depY[] = {0, 0, -1, 1};

    testX = jeu.Clyde.posX + depX[jeu.Clyde.dir];
    testY = jeu.Clyde.posY + depY[jeu.Clyde.dir];

    if (jeu.terrain[testY*jeu.largeur+testX]!=MUR)
    {
        jeu.Clyde.posX = testX;
        jeu.Clyde.posY = testY;
    }
}

void PacmanWindow::DeplaceInky()
{
    int testX, testY;
    int depX[] = {-1, 1, 0, 0};
    int depY[] = {0, 0, -1, 1};

    testX = jeu.Inky.posX + depX[jeu.Inky.dir];
    testY = jeu.Inky.posY + depY[jeu.Inky.dir];

    if (jeu.terrain[testY*jeu.largeur+testX]!=MUR)
    {
        jeu.Inky.posX = testX;
        jeu.Inky.posY = testY;
    }
}

void PacmanWindow::DeplacePinky()
{
    int testX, testY;
    int depX[] = {-1, 1, 0, 0};
    int depY[] = {0, 0, -1, 1};

    testX = jeu.Pinky.posX + depX[jeu.Pinky.dir];
    testY = jeu.Pinky.posY + depY[jeu.Pinky.dir];

    if (jeu.terrain[testY*jeu.largeur+testX]!=MUR)
    {
        jeu.Pinky.posX = testX;
        jeu.Pinky.posY = testY;
    }
}

Direction PacmanWindow::DeplaceFantomeMort(Fantome _fantomas)
{
    if(_fantomas.posX == 13 && _fantomas.posY == 9)
        return BAS;
    else if(_fantomas.posX >= 8 && _fantomas.posX <= 12 && _fantomas.posY == 9)
        return DROITE;
    else if(_fantomas.posX >= 14 && _fantomas.posX <= 18 && _fantomas.posY == 9)
        return GAUCHE;
    else if(_fantomas.posX >= 9 && _fantomas.posX <= 17 && _fantomas.posY == 15)
        return GAUCHE;
    else if(_fantomas.posX == 8 && _fantomas.posY <= 15 && _fantomas.posY >= 10)
        return HAUT;
    else if(_fantomas.posX == 18 && _fantomas.posY <= 15 && _fantomas.posY >= 10)
        return HAUT;
    else if(_fantomas.posX == 12 && _fantomas.posY == 12)
        return BAS ;
    else if(_fantomas.posX == 14 && _fantomas.posY == 12)
        return BAS ;
    else if(_fantomas.posX == 12 && _fantomas.posY == 12)
        return BAS ;
    else if(_fantomas.posX == 6 && _fantomas.posY == 12)
        return DROITE ;
    else if(_fantomas.posX == 20 && _fantomas.posY == 12)
        return GAUCHE ;
    else if((_fantomas.posX == 1 || _fantomas.posX == 12 || _fantomas.posX == 14 ||_fantomas.posX == 25) && _fantomas.posY == 23)
        return HAUT ;
    else if((_fantomas.posX == 3 ||_fantomas.posX == 6 ||_fantomas.posX == 8 ||_fantomas.posX == 18 ||_fantomas.posX == 20 ||_fantomas.posX == 23 ) && _fantomas.posY == 21)
        return HAUT ;
    else if((_fantomas.posX == 12 ||_fantomas.posX == 25) && _fantomas.posY == 21)
        return GAUCHE;
    else if((_fantomas.posX == 1 ||_fantomas.posX == 14) && _fantomas.posY == 21)
        return DROITE ;

    else if((_fantomas.posX == 1 ||_fantomas.posX == 6 ||_fantomas.posX == 12 ||_fantomas.posX == 14 ||_fantomas.posX == 20 ||_fantomas.posX == 25 ) && _fantomas.posY == 19)
        return HAUT ;
    else if((_fantomas.posX == 3 ||_fantomas.posX == 8) && _fantomas.posY == 19)
        return GAUCHE;
    else if((_fantomas.posX == 23 ||_fantomas.posX == 18) && _fantomas.posY == 19)
        return DROITE ;

    else if((_fantomas.posX == 6 ||_fantomas.posX == 8 ||_fantomas.posX == 18 ||_fantomas.posX == 20 ) && _fantomas.posY == 17)
        return HAUT ;
    else if((_fantomas.posX == 12 ||_fantomas.posX == 25) && _fantomas.posY == 17)
        return GAUCHE;
    else if((_fantomas.posX == 1 ||_fantomas.posX == 14) && _fantomas.posY == 17)
        return DROITE ;

    else switch(_fantomas.number)
            {
                case 0 :
                    {
                        return PacmanWindow::DetecteFantomeToNode(jeu.Clyde);
                    }
                break;
                case 1 :
                    {
                        return PacmanWindow::DetecteFantomeToNode(jeu.Pinky);
                    }
                break;
                case 2 :
                    {
                        return PacmanWindow::DetecteFantomeToNode(jeu.Blinky);
                    }
                break;
                case 3 :
                    {
                        return PacmanWindow::DetecteFantomeToNode(jeu.Inky);
                    }
                break;
            }
}

void PacmanWindow::TransformFantomeBackToHunter()
{
    if(jeu.Pinky.posX == 13 && jeu.Pinky.posY == 12)
        jeu.Pinky.mood = HUNTER;
    if(jeu.Inky.posX == 13 && jeu.Inky.posY == 12)
        jeu.Inky.mood = HUNTER;
    if(jeu.Clyde.posX == 13 && jeu.Clyde.posY == 12)
        jeu.Clyde.mood = HUNTER;
    if(jeu.Blinky.posX == 13 && jeu.Blinky.posY == 12)
        jeu.Blinky.mood = HUNTER;
}

