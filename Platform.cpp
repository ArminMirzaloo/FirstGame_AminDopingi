#include "Platform.h"
#include <QGraphicsScene>
#include <QPainter>

Platform::Platform(QGraphicsScene *scene)
        : QGraphicsItemGroup()
{
    // Background 1 setup
    QPixmap bgPixmap1(":/images/background");
    bgPixmap1 = bgPixmap1.scaled(7545, scene->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    background1 = new QGraphicsPixmapItem(bgPixmap1, this);
    background1->setPos(0, 0);

    // Background 2 setup
    QPixmap bgPixmap2(":/images/hills");
    bgPixmap2 = bgPixmap2.scaled(bgPixmap2.width(), scene->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    background2 = new QGraphicsPixmapItem(bgPixmap2, this);
    background2->setPos(0, 0);
    background2->setOpacity(0.5); // Set opacity to 50%

    // Platform 1 setup
    QPixmap pixmap1(":/images/platform");
    pixmap1 = pixmap1.scaled(pixmap1.width(), pixmap1.height(), Qt::KeepAspectRatioByExpanding);
    platform1 = new QGraphicsPixmapItem(pixmap1, this);
    platform1->setPos(0, 800);

    // Platform 2 setup
    QPixmap pixmap2(":/images/platform2");
    pixmap2 = pixmap2.scaled(pixmap2.width(), pixmap2.height(), Qt::KeepAspectRatioByExpanding);
    platform2 = new QGraphicsPixmapItem(pixmap2, this);
    platform2->setPos(750, 700);

    // Platform 3 setup
    QPixmap pixmap3(":/images/platform");
    pixmap3 = pixmap3.scaled(pixmap1.width(), pixmap1.height(), Qt::KeepAspectRatioByExpanding);
    platform3 = new QGraphicsPixmapItem(pixmap3, this);
    platform3->setPos(1200 , 750);

    // Platform 4 setup
    QPixmap pixmap4(":/images/platform2");
    pixmap4 = pixmap4.scaled(pixmap2.width(), pixmap2.height(), Qt::KeepAspectRatioByExpanding);
    platform4 = new QGraphicsPixmapItem(pixmap4, this);
    platform4->setPos(1900, 600);

    // Platform 5 setup
    QPixmap pixmap5(":/images/platform");
    pixmap5 = pixmap5.scaled(pixmap1.width(), pixmap1.height(), Qt::KeepAspectRatioByExpanding);
    platform5 = new QGraphicsPixmapItem(pixmap5, this);
    platform5->setPos(2270, 500);

    // Platform 6 setup
    QPixmap pixmap6(":/images/platform2");
    pixmap6 = pixmap6.scaled(pixmap2.width(), pixmap2.height(), Qt::KeepAspectRatioByExpanding);
    platform6 = new QGraphicsPixmapItem(pixmap6, this);
    platform6->setPos(3000, 700);

    // Platform 7 setup
    QPixmap pixmap7(":/images/platform");
    pixmap7 = pixmap7.scaled(pixmap1.width(), pixmap1.height(), Qt::KeepAspectRatioByExpanding);
    platform7 = new QGraphicsPixmapItem(pixmap7, this);
    platform7->setPos(3350, 600);

    // Platform 8 setup
    QPixmap pixmap8(":/images/platform2");
    pixmap8 = pixmap8.scaled(pixmap2.width(), pixmap2.height(), Qt::KeepAspectRatioByExpanding);
    platform8 = new QGraphicsPixmapItem(pixmap8, this);
    platform8->setPos(4000, 650);

    // Platform 9 setup
    QPixmap pixmap9(":/images/platform");
    pixmap9 = pixmap9.scaled(pixmap1.width(), pixmap1.height(), Qt::KeepAspectRatioByExpanding);
    platform9 = new QGraphicsPixmapItem(pixmap9, this);
    platform9->setPos(4400, 780);

    // Platform 10 setup
    QPixmap pixmap10(":/images/platform2");
    pixmap10 = pixmap10.scaled(pixmap2.width(), pixmap2.height(), Qt::KeepAspectRatioByExpanding);
    platform10 = new QGraphicsPixmapItem(pixmap10, this);
    platform10->setPos(5100, 700);

    // Platform 11 setup
    QPixmap pixmap11(":/images/platform");
    pixmap11 = pixmap11.scaled(pixmap1.width(), pixmap1.height(), Qt::KeepAspectRatioByExpanding);
    platform11 = new QGraphicsPixmapItem(pixmap11, this);
    platform11->setPos(5450, 800);

    // Platform 12 setup
    QPixmap pixmap12(":/images/platform2");
    pixmap12 = pixmap12.scaled(pixmap2.width(), pixmap2.height(), Qt::KeepAspectRatioByExpanding);
    platform12 = new QGraphicsPixmapItem(pixmap12, this);
    platform12->setPos(6050, 700);

    // Platform 13 setup
    QPixmap pixmap13(":/images/platform");
    pixmap13 = pixmap13.scaled(pixmap1.width(), pixmap1.height(), Qt::KeepAspectRatioByExpanding);
    platform13 = new QGraphicsPixmapItem(pixmap13, this);
    platform13->setPos(6450, 600);

    // Platform 14 setup
    QPixmap pixmap14(":/images/platform2");
    pixmap14 = pixmap14.scaled(pixmap2.width(), pixmap2.height(), Qt::KeepAspectRatioByExpanding);
    platform14 = new QGraphicsPixmapItem(pixmap14, this);
    platform14->setPos(7200, 550);

    scene->addItem(this);

    // Enable focus for keyPressEvent
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    // Add items to group
    addToGroup(background1);
    addToGroup(background2);
    addToGroup(platform1);
    addToGroup(platform2);
    addToGroup(platform3);
    addToGroup(platform4);
    addToGroup(platform5);
    addToGroup(platform6);
    addToGroup(platform7);
    addToGroup(platform8);
    addToGroup(platform9);
    addToGroup(platform10);
    addToGroup(platform11);
    addToGroup(platform12);
    addToGroup(platform13);
    addToGroup(platform14);
}

void Platform::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_Left:
            moveLeft();
            break;
        case Qt::Key_Right:
            moveRight();
            break;
        default:
            QGraphicsItemGroup::keyPressEvent(event);
    }
}

void Platform::moveLeft()
{
    background1->setPos(background1->x() + 10, background1->y());
    background2->setPos(background2->x() + 10, background2->y());
    platform1->setPos(platform1->x() + 10, platform1->y());
    platform2->setPos(platform2->x() + 10, platform2->y());
    platform3->setPos(platform3->x() + 10, platform3->y());
    platform4->setPos(platform4->x() + 10, platform4->y());
    platform5->setPos(platform5->x() + 10, platform5->y());
    platform6->setPos(platform6->x() + 10, platform6->y());
    platform7->setPos(platform7->x() + 10, platform7->y());
    platform8->setPos(platform8->x() + 10, platform8->y());
    platform9->setPos(platform9->x() + 10, platform9->y());
    platform10->setPos(platform10->x() + 10, platform10->y());
    platform11->setPos(platform11->x() + 10, platform11->y());
    platform12->setPos(platform12->x() + 10, platform12->y());
    platform13->setPos(platform13->x() + 10, platform13->y());
    platform14->setPos(platform14->x() + 10, platform14->y());
}

void Platform::moveRight()
{
    background1->setPos(background1->x() - 10, background1->y());
    background2->setPos(background2->x() - 10, background2->y());
    platform1->setPos(platform1->x() - 10, platform1->y());
    platform2->setPos(platform2->x() - 10, platform2->y());
    platform3->setPos(platform3->x() - 10, platform3->y());
    platform4->setPos(platform4->x() - 10, platform4->y());
    platform5->setPos(platform5->x() - 10, platform5->y());
    platform6->setPos(platform6->x() - 10, platform6->y());
    platform7->setPos(platform7->x() - 10, platform7->y());
    platform8->setPos(platform8->x() - 10, platform8->y());
    platform9->setPos(platform9->x() - 10, platform9->y());
    platform10->setPos(platform10->x() - 10, platform10->y());
    platform11->setPos(platform11->x() - 10, platform11->y());
    platform12->setPos(platform12->x() - 10, platform12->y());
    platform13->setPos(platform13->x() - 10, platform13->y());
    platform14->setPos(platform14->x() - 10, platform14->y());
}
