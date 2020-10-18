#include "mainwindow.h"
#include <QtWidgets>
#include "celltable.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget* game_window = new QWidget();
    CellTable* table = new CellTable();
    game_window->setLayout(table);
    w.setCentralWidget(game_window);
    w.show();

    return a.exec();
}
