#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setFixedSize(200,500);

    w.show();

    return a.exec();
}
/*
void onefunc()
{

}
*/
