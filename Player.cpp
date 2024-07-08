#include "Player.h"

Player::Player(int sceneWidth, int sceneHeight, QGraphicsItem *parent) {
    setFlags(GraphicsItemFlag::ItemIsFocusable);
    setFocus();

    auto pixmap = new QPixmap(":/images/spriteStandRight");
    auto scaledPixmap = pixmap->scaled(70,70);
    setPixmap(scaledPixmap);

    pixmap = new QPixmap(":/images/running1");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running2");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running3");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running4");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running5");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running6");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running7");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running8");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running9");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running10");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running11");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running12");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running13");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running14");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running15");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running16");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running17");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running18");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running19");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running20");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running21");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running22");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running23");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running24");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running25");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running26");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running27");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running28");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running29");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/running30");
    scaledPixmap = pixmap->scaled(70,50);
    moveRightFrames.append(new QPixmap(scaledPixmap));

    pixmap = new QPixmap(":/images/runLeft1");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft2");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft3");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft4");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft5");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft6");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft7");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft8");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft9");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft10");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft11");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft12");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft13");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft14");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft15");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft16");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft17");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft18");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft19");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft20");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft21");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft22");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft23");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft24");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft25");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft26");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft27");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft28");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft29");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));
    pixmap = new QPixmap(":/images/runLeft30");
    scaledPixmap = pixmap->scaled(70,50);
    moveLeftFrames.append(new QPixmap(scaledPixmap));

    auto x = (sceneWidth - scaledPixmap.width()) / 4;
    auto y = (sceneHeight - scaledPixmap.height()) / 4;

    heightAnimator = new QPropertyAnimation(this, "height", this);
    heightAnimator->setStartValue(y);
    heightAnimator->setEndValue(y);
    heightAnimator->setDuration(100);
    heightAnimator->start();
    connect(heightAnimator, &QPropertyAnimation::finished, this, &Player::gravity);

    widthAnimator = new QPropertyAnimation(this, "width", this);
    widthAnimator->start();
    connect(widthAnimator, &QPropertyAnimation::finished, this, &Player::winingToLeft);
    connect(widthAnimator, &QPropertyAnimation::finished, this, &Player::winingToRight);

    setPos(x, y);

}

void Player::winingToLeft() {
    setPixmap(*moveLeftFrames.at(Lframe));
    Lframe = (Lframe + 1) % 30;

}

void Player::winingToRight() {
    setPixmap(*moveRightFrames.at(Rframe));
    Rframe = (Rframe + 1) % 30;

}

void Player::moveLeft() {
    winingToLeft();
    widthAnimator->stop();
    widthAnimator->setStartValue(x());
    widthAnimator->setEndValue(x() - 20);
    widthAnimator->setDuration(500);
    widthAnimator->setEasingCurve(QEasingCurve::Linear);
    widthAnimator->start();

}

void Player::moveRight() {
    winingToRight();
    widthAnimator->stop();
    widthAnimator->setStartValue(x());
    widthAnimator->setEndValue(x() + 20);
    widthAnimator->setDuration(500);
    widthAnimator->setEasingCurve(QEasingCurve::Linear);
    widthAnimator->start();
}

void Player::gravity() {
    heightAnimator->stop();
    heightAnimator->setStartValue(y());
    heightAnimator->setEndValue(700);//groundY
    heightAnimator->setDuration(500);
    heightAnimator->setEasingCurve(QEasingCurve::Linear);
    heightAnimator->start();
}

void Player::jump() {
    heightAnimator->stop();
    heightAnimator->setStartValue(y());
    heightAnimator->setEndValue(y() - 100);
    heightAnimator->setDuration(200);
    heightAnimator->setEasingCurve(QEasingCurve::Linear);
    heightAnimator->start();

}

void Player::keyPressEvent(QKeyEvent *event) {
    QGraphicsItem::keyPressEvent(event);

    if(event->key() == Qt::Key::Key_Left){
        moveLeft();
    }

    if(event->key() == Qt::Key::Key_Right){
        moveRight();
    }

    if(event->key() == Qt::Key::Key_Space){
        jump();
    }
}
