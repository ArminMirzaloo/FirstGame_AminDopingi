#ifndef MAIN_CPP_DECORATOR2_H
#define MAIN_CPP_DECORATOR2_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QTimer>
#include <QPropertyAnimation>
#include <QObject>

class Decorator2 : public QObject , public QGraphicsPixmapItem {
    Q_OBJECT
    Q_PROPERTY(qreal width READ x WRITE setX())
private :
    int currentX;
    QPixmap* scaledImage;
    bool initialized{false};
    QTimer* moveTimer;
    QPropertyAnimation *moveBG;

public :
    Decorator2(int screenWidth , int screenHeight , QGraphicsItem* parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;

public slots :
    void moveDecorator();
    void move();
    void moveBack();
};



#endif //MAIN_CPP_DECORATOR2_H
