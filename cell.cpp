#include <QtWidgets>
#include "cell.h"

Cell::Cell(int cell_value/* = 0*/, QWidget* pwt/* = 0*/) : QLabel(pwt)
{
    setAlignment(Qt::AlignCenter);
    this->cell_value = cell_value;
    setFrameStyle(QFrame::Panel | QFrame::Raised);
}

/*virtual*/void Cell::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() & Qt::LeftButton) {
        setText(QString::number(cell_value));
        setFrameStyle(QFrame::Panel | QFrame::Sunken);
    }
    if (event->button() & Qt::RightButton) {
        setText("!");
    }
}

