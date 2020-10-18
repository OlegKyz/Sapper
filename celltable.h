#ifndef CELLTABLE_H
#define CELLTABLE_H

#include <QtWidgets>
#include <QtCore>
#include "cell.h"

class CellTable : public QGridLayout {
    Q_OBJECT
public:
    CellTable(int rang = 9, QWidget* pwt = 0);
private:
    int rang;
    const int bomb_count = 6;
    Cell** cell_matrix;

    void create_cells();
    int get_random_number(int low, int high);
    void set_random_base();
};

#endif // CELLTABLE_H
