#include "Game.h"
#include "views/Platform.h"
#include <QGraphicsScene>

Game::Game() {
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    showFullScreen();

    auto scene = new QGraphicsScene(this);
    scene->setSceneRect( 0 , 0 , width() , height() );

    platform = new Platform(scene);

    player = new Player(width(), height());
    scene->addItem(player);

    player->setPos(100, 100);

    setScene(scene);
}




