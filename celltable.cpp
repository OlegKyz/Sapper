#include <QtWidgets>
#include <QDateTime>
#include "celltable.h"
#include "cell.h"

CellTable::CellTable(int rang/* = 9 */, QWidget* pwt/* = 0*/) : QGridLayout(pwt)
{
    setContentsMargins(5,5,5,5);
    setSpacing(5);
    this->rang = rang > 9? rang : 9;
    cell_matrix = 0;
    create_cells();
}

void CellTable::create_cells() {
    set_random_base();
    for (int i = 0; i < rang; ++i) {
        for (int j = 0; j < rang; ++j) {
            int rnumber = get_random_number(0,rang - 1);
            Cell* buf_cell = new Cell(rnumber);
            addWidget(buf_cell, i, j);
         }
    }
}
/*
void CellTable::create_bomb() {
    set_random_base();
    for (int i = 0; i < bomb_count; ) {
        int row = get_random_number(0, rang - 1);
        int column = get_random_number(0, rang - 1);
        if
    }
}
*/
int CellTable::get_random_number(int low, int high) {
    return int( qrand() % ((high + 1) - low) + low);
}

void CellTable::set_random_base() {
    long random_base = QDateTime::currentMSecsSinceEpoch();
    qsrand(random_base);
}

