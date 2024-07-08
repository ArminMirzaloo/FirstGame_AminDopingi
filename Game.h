#ifndef FIRSTGAME_AMIN_DOPINGI__GAME_H
#define FIRSTGAME_AMIN_DOPINGI__GAME_H

#include <QGraphicsView>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include "views/Platform.h"
#include "Player.h"

class Game : public QGraphicsView { // , public QGraphicsRectItem , public QGraphicsScene
Q_OBJECT

private:

    QGraphicsScene *scene;
    Platform *platform;
    Player *player;

public:
    Game();

public slots:


};


#endif //FIRSTGAME_AMIN_DOPINGI__GAME_H

