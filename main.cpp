#include "dialog.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator trans;
    trans.load(":/qt_zh_CN.qm");
    a.installTranslator(&trans);

    Dialog w;
    w.show();
    return a.exec();
}
