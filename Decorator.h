#ifndef MAIN_CPP_DECORATOR_H
#define MAIN_CPP_DECORATOR_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QTimer>
#include <QPropertyAnimation>
#include <QObject>

class Decorator: public QObject , public QGraphicsPixmapItem {
    Q_OBJECT
    Q_PROPERTY(qreal width READ x WRITE setX())
private :
    int currentX;
    QPixmap* scaledImage;
    bool initialized{false};
    QTimer* moveTimer;
    QPropertyAnimation *moveBG;

public :
    Decorator(int screenWidth , int screenHeight , QGraphicsItem* parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;

public slots :
    void moveDecorator();
    void move();
    void moveBack();
};


#endif //MAIN_CPP_DECORATOR_H
