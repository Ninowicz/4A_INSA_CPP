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
    // Desine les fantomes

    // Pinky
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

    jeu.init();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &PacmanWindow::handleTimer);
    timer->start(100);                                                      // c est la, la duree de boucle

    largeurCase = pixmapMur.width();
    hauteurCase = pixmapMur.height();

    resize(jeu.getNbCasesX()*(largeurCase+8), jeu.getNbCasesY()*hauteurCase);
    PacmanWindow::ScoreHandler();


}

void PacmanWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    list<Fantome>::const_iterator itFantome;
    int x, y;

    // Taille des cases en pixels
    int largeurCase, hauteurCase;

    largeurCase = pixmapMur.width();
    hauteurCase = pixmapMur.height();
    // Dessine les cases
        for (y=0;y<jeu.getNbCasesY();y++)
            for (x=0;x<jeu.getNbCasesX();x++)
                    painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapBkgnd);

    // Dessine les cases
    for (y=0;y<jeu.getNbCasesY();y++)
        for (x=0;x<jeu.getNbCasesX();x++)
			if (jeu.getCase(x,y)==MUR)
                painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapMur);

    // Dessine les Gumballz
	for (y=0;y<jeu.getNbCasesY();y++)
        for (x=0;x<jeu.getNbCasesX();x++)
			if (jeu.getCase(x,y)== GUM)
                painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapGum);

    // Dessine les Tazballz
	for (y=0;y<jeu.getNbCasesY();y++)
        for (x=0;x<jeu.getNbCasesX();x++)
			if (jeu.getCase(x,y)== TAZ)
                painter.drawPixmap(x*largeurCase, y*hauteurCase, pixmapTaz);

    // Dessine les fantomes

    // Dessine Pinky
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
        painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapFantome_Scared);
    }
    else if(jeu.Pinky.getMood() == DEAD)
    {
        painter.drawPixmap(jeu.Pinky.getPosX()*largeurCase, jeu.Pinky.getPosY()*hauteurCase, pixmapFruit_Aubergine);
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
        painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapFantome_Scared);
    }
    else if(jeu.Inky.getMood() == DEAD)
    {
        painter.drawPixmap(jeu.Inky.getPosX()*largeurCase, jeu.Inky.getPosY()*hauteurCase, pixmapFruit_Aubergine);
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
        painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapFantome_Scared);
    }
    else if(jeu.Clyde.getMood() == DEAD)
    {
        painter.drawPixmap(jeu.Clyde.getPosX()*largeurCase, jeu.Clyde.getPosY()*hauteurCase, pixmapFruit_Aubergine);
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
        painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapFantome_Scared);
    }
    else if(jeu.Blinky.getMood() == DEAD)
    {
        painter.drawPixmap(jeu.Blinky.getPosX()*largeurCase, jeu.Blinky.getPosY()*hauteurCase, pixmapFruit_Aubergine);
    }



    //for (itFantome=jeu.fantomes.begin(); itFantome!=jeu.fantomes.end(); itFantome++)
    //{
    //    //painter.drawPixmap(itFantome->getPosX()*largeurCase, itFantome->getPosY()*hauteurCase, pixmapFantome);
    //    if(itFantome->getDir() == HAUT){
    //        painter.drawPixmap(itFantome->getPosX()*largeurCase, itFantome->getPosY()*hauteurCase, pixmapFantome_Up);
    //    }
    //    if(itFantome->getDir() == BAS){
    //        painter.drawPixmap(itFantome->getPosX()*largeurCase, itFantome->getPosY()*hauteurCase, pixmapFantome_Down);
    //    }
    //    if(itFantome->getDir() == GAUCHE){
    //        painter.drawPixmap(itFantome->getPosX()*largeurCase, itFantome->getPosY()*hauteurCase, pixmapFantome_Left);
    //    }
    //    if(itFantome->getDir() == DROITE){
    //        painter.drawPixmap(itFantome->getPosX()*largeurCase, itFantome->getPosY()*hauteurCase, pixmapFantome_Right);
    //    }
    //
    //}

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





	// Dessine Pacman
	//painter.drawPixmap(jeu.getPacmanX()*largeurCase, jeu.getPacmanY()*hauteurCase, pixmapPacman);



	// Dessine les fruits
	if (jeu.terrain[19*jeu.largeur+13] == FRUIT)
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
    if (event->key()==Qt::Key_Left)
        jeu.MonAgent.dir = GAUCHE;
        //jeu.deplacePacman(GAUCHE);
    else if (event->key()==Qt::Key_Right)
        jeu.MonAgent.dir = DROITE;
        //jeu.deplacePacman(DROITE);
    else if (event->key()==Qt::Key_Up)
        jeu.MonAgent.dir = HAUT;
        //jeu.deplacePacman(HAUT);
    else if (event->key()==Qt::Key_Down)
        jeu.MonAgent.dir = BAS;
        //jeu.deplacePacman(BAS);
    //update();
}

void PacmanWindow::handleTimer()
{
    //jeu.MonAgent.dirprecedent
    if(jeu.MonAgent.posXpre == jeu.getPacmanX() && jeu.MonAgent.posYpre == jeu.getPacmanY())
    {
        jeu.MonAgent.dir = jeu.MonAgent.dirprecedente;
    }
    //jeu.MonAgent.posXpre = jeu.getPacmanX();
    //jeu.MonAgent.posYpre = jeu.getPacmanY();
    //jeu.MonAgent.dirprecedente = jeu.MonAgent.dir;
    jeu.evolue();
    jeu.deplacePacman(jeu.MonAgent.dir);
    PacmanWindow::GumHandler();
    PacmanWindow::TazHandler();
    PacmanWindow::FruitHandler();
    PacmanWindow::LifeHandler();
    PacmanWindow::Teleportation();
    update();
}

void PacmanWindow::GumHandler()
{
    if(jeu.terrain[jeu.getPacmanY()*jeu.largeur+jeu.getPacmanX()] == GUM){
        jeu.terrain[jeu.getPacmanY()*jeu.largeur+jeu.getPacmanX()] = VIDE;
        jeu.score = jeu.score + 5;
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
        PacmanWindow::ScoreHandler();
        jeu.Pinky.mood = HUNTED;
        jeu.Inky.mood = HUNTED;
        jeu.Blinky.mood = HUNTED;
        jeu.Clyde.mood = HUNTED;
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
            }

            else if(jeu.Vie_1 && jeu.Vie_2)
            {
                PacmanWindow::Respawn();
                jeu.Vie_2 = false;
            }
            else if(jeu.Vie_1)
            {
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
                        jeu.score = jeu.score + 200;
                        jeu.Pinky.mood = DEAD;
                    }
                break;
                case 1 :
                    {
                        jeu.score = jeu.score + 200;
                        jeu.Inky.mood = DEAD;
                    }
                break;
                case 2 :
                    {
                        jeu.score = jeu.score + 200;
                        jeu.Clyde.mood = DEAD;
                    }
                break;
                case 3 :
                    {
                        jeu.score = jeu.score + 200;
                        jeu.Blinky.mood = DEAD;
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

    jeu.Clyde.posX =14;
    jeu.Clyde.posY =12;
    jeu.Clyde.mood = HUNTER;

    jeu.Inky.posX =12;
    jeu.Inky.posY =12;
    jeu.Inky.mood = HUNTER;

    jeu.Pinky.posX = 11;
    jeu.Pinky.posY =12;
    jeu.Pinky.mood = HUNTER;

    jeu.posPacmanX = 13;
    jeu.posPacmanY =15;
    jeu.MonAgent.dir = HAUT;
}

void PacmanWindow::EtatJeu()
{
    // GAME OVER

    if (!jeu.Vie_1 == true)
    {
        jeu.posPacmanX = NULL;
        jeu.posPacmanY = NULL;
    }
    // YOU WON
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

