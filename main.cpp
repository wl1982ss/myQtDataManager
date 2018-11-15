#include "widget.h"
#include <QApplication>

#include <QTextCodec>
#include "connection.h"
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    if(! createConnection() || !createXml()) return 0;

    Widget w;
    LoginDialog dlg;
    if(dlg.exec() == QDialog::Accepted){
        w.show();
        return a.exec();
    } else {
        return 0;
    }


}
