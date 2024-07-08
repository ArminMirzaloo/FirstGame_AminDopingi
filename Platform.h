#ifndef PLATFORM_H
#define PLATFORM_H

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItemGroup>

class Platform : public QGraphicsItemGroup
{
public:
    Platform(QGraphicsScene *scene);

    void moveLeft();
    void moveRight();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    QGraphicsPixmapItem *background1;
    QGraphicsPixmapItem *background2;
    QGraphicsPixmapItem *platform1;
    QGraphicsPixmapItem *platform2;
    QGraphicsPixmapItem *platform3;
    QGraphicsPixmapItem *platform4;
    QGraphicsPixmapItem *platform5;
    QGraphicsPixmapItem *platform6;
    QGraphicsPixmapItem *platform7;
    QGraphicsPixmapItem *platform8;
    QGraphicsPixmapItem *platform9;
    QGraphicsPixmapItem *platform10;
    QGraphicsPixmapItem *platform11;
    QGraphicsPixmapItem *platform12;
    QGraphicsPixmapItem *platform13;
    QGraphicsPixmapItem *platform14;

};

#endif // PLATFORM_H
