#include "Decorator2.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QKeyEvent>

Decorator2::Decorator2(int screenWidth , int screenHeight , QGraphicsItem* parent) : QGraphicsPixmapItem(parent) {
    setFlag(GraphicsItemFlag::ItemIsFocusable);
    setFocus();

    auto x = 0;
    auto y = 0;

    QPixmap pixmap(":/images/hills");
    pixmap = pixmap.scaled(pixmap.width() , screenHeight , Qt::KeepAspectRatioByExpanding);
    pixmap = pixmap.copy(0 , 0 , pixmap.width() , screenHeight);
    scaledImage = new QPixmap(pixmap);
    setPixmap(pixmap);
    setPos(x , y);

    moveBG = new QPropertyAnimation(this , "width" , this);
    connect(moveBG , &QPropertyAnimation::finished , this , &Decorator2::moveDecorator);


}

void  Decorator2::moveDecorator() {
    currentX = (currentX + 10)% scaledImage->width();
    QPixmap croppedImage;
    int remindingWidth = scaledImage->width() - currentX;
    croppedImage = scaledImage->copy(currentX , 0 , remindingWidth , scaledImage->height());

    QPixmap result(QSize(scaledImage->width() , scaledImage->height()));
    QPainter p(&result);
    p.drawPixmap(0 , 0 , croppedImage);

    if (currentX > 0) {
        auto imageWidth = scaledImage->width() - remindingWidth;
        auto image = scaledImage->copy(0 , 0 , imageWidth , scaledImage->height());
        p.drawPixmap(remindingWidth , 0 , image);
    }

    setPixmap(result);
}

void Decorator2::move() {
    moveBG->stop();
    moveBG->setStartValue(x());
    moveBG->setEndValue(x()-10);
    moveBG->setDuration(20);
    moveBG->start();
}

void Decorator2::moveBack() {
    moveBG->stop();
    moveBG->setStartValue(x());
    moveBG->setEndValue(x()+10);
    moveBG->setDuration(20);
    moveBG->start();
}

void Decorator2::keyPressEvent(QKeyEvent *event) {
    QGraphicsItem::keyPressEvent(event);

    if (event->key() == Qt::Key::Key_Right){
        move();
    }

    else if (event->key() == Qt::Key::Key_Left){
        moveBack();
    }

}