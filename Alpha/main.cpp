#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("First App");
    w.setMinimumSize(700,700);
    w.show();

    return a.exec();
}
