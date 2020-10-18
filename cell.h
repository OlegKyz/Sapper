#ifndef CELL_H
#define CELL_H

#include <QtWidgets>

class Cell : public QLabel {
    Q_OBJECT
public:
    Cell(int cell_value = 0, QWidget* pwt = 0);
protected:
    virtual void mouseReleaseEvent(QMouseEvent* event);
private:
    int cell_value;
};

#endif // CELL_H
