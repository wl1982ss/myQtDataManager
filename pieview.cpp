#include "pieview.h"

PieView::PieView()
{

}

void PieView::paintEvent(QPaintEvent *event)
{
    QItemSelectionModel *selections = selectionModel();
    QStyleOptionViewItem option = viewOptions();

    QBrush background = option.palette.base();
    //QPen foreground(option.palette.color(QPalette::WindowText));
}
