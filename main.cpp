#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //QApplication::setStyle("fusion");
    QApplication app(argc, argv);
    MainWindow window;

    window.setMinimumSize(1093,614);
    window.resize(1093, 614);
    window.show();
    return app.exec();
}
