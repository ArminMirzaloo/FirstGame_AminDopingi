#ifndef FIRSTGAME_AMIN_DOPINGI__PLAYER_H
#define FIRSTGAME_AMIN_DOPINGI__PLAYER_H

#include <QGraphicsPixmapItem>
#include <QList>
#include <QTimer>
#include <QObject>
#include <QPropertyAnimation>
#include <QKeyEvent>


class Player : public QObject , public QGraphicsPixmapItem {
    Q_OBJECT

    Q_PROPERTY(qreal height READ y WRITE setY)
    Q_PROPERTY(qreal width READ x WRITE setX)

private :
    int Rframe{};
    int Lframe{};
    int groundY{};
    QTimer* winingTimer;
    QList<QPixmap*> moveLeftFrames{};
    QList<QPixmap*> moveRightFrames{};
    QPropertyAnimation *heightAnimator;
    QPropertyAnimation *widthAnimator;

public :
    Player(int sceneWidth , int sceneHeight , QGraphicsItem* parent = nullptr);

public slots :
    void winingToLeft();
    void winingToRight();
    void gravity();

protected:
    void keyPressEvent(QKeyEvent *event) override;

public:
    void jump();
    void moveRight();
    void moveLeft();


};


#endif //FIRSTGAME_AMIN_DOPINGI__PLAYER_H
