#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_sellTypeComboBox_currentIndexChanged(QString type);

    void on_sellBrandComboBox_currentIndexChanged(QString brand);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
