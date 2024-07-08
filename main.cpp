#include <QApplication>
#include <QPushButton>
#include "src/Game.h" // include class Game

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto game = new Game(); //new object from game
    game->show();

    return QApplication::exec();
}
