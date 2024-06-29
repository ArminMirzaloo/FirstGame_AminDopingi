#include "Game.h"

Game::Game() {
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    showFullScreen();

    auto scene = new QGraphicsScene(this);
    scene->setSceneRect( 0 , 0 , width() , height() );


    scene->setBackgroundBrush(QBrush(QColor("#00008B")));

    setScene(scene);


}
