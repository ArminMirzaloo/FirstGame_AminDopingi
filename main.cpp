#include <QApplication>
#include <QPushButton>
#include "Game.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    auto game = new Game();
    game->show();

    return QApplication::exec();
}
