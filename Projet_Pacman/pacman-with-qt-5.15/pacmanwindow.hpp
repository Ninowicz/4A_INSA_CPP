#ifndef PACMANWINDOW_HPP
#define PACMANWINDOW_HPP

#include <QtCore/QtCore>
#include <QtWidgets/QtWidgets>
#include "jeu.hpp"

class PacmanWindow : public QFrame
{
  protected:
    Jeu jeu;
    QPixmap pixmapBkgnd, pixmapPacman_Up, pixmapPacman_Down, pixmapPacman_Left, pixmapPacman_Right, pixmapFantome, pixmapFantome_Up, pixmapFantome_Down,
    pixmapFantome_Right, pixmapFantome_Left, pixmapMur, pixmapFruit_Cerise, pixmapFruit_Peche, pixmapFruit_Aubergine, pixmapGum, pixmapTaz, pixmapScore,
    pixmap1, pixmap2, pixmap3, pixmap4, pixmap5, pixmap6, pixmap7, pixmap8, pixmap9, pixmap0,
    pixmapBlinky_Up, pixmapBlinky_Down, pixmapBlinky_Left, pixmapBlinky_Right,
    pixmapInky_Up, pixmapInky_Down, pixmapInky_Left, pixmapInky_Right,
    pixmapPinky_Up, pixmapPinky_Down, pixmapPinky_Right, pixmapPinky_Left,
    pixmapClyde_Up, pixmapClyde_Down, pixmapClyde_Right, pixmapClyde_Left,
    pixmapFantome_Scared, pixmapFantome_Dead,
    pixmapGameOver, pixmapPressAnyKey,pixmapPressR ;

  public:
    PacmanWindow(QWidget *pParent=0, Qt::WindowFlags flags=0);
    void handleTimer();

  protected:
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *);
    void Teleportation();
    void GumHandler();
    void TazHandler();
    void FruitHandler();
    void ScoreHandler();
    void LifeHandler();
    void Respawn();
    void EtatJeu();
    void FantomeMange(Fantome);
    Direction DetecteFantomeToNode(Fantome);
    Direction AncienneDirectionOpposee(Direction);

    void TimeManagerGhost(Fantome);

    void DeplaceFantome();
    void DeplaceBlinky();
    void DeplaceClyde();
    void DeplacePinky();
    void DeplaceInky();

    Direction DeplaceFantomeMort(Fantome);
    void TransformFantomeBackToHunter();


};

#endif
