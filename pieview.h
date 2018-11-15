#ifndef PIEVIEW_H
#define PIEVIEW_H

#include <QWidget>
#include <QAbstractItemView>

class PieView : public QAbstractItemView
{
public:
    PieView();
    void paintEvent(QPaintEvent *event);
};

#endif // PIEVIEW_H
