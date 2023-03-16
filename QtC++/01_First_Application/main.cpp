#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel *label = new QLabel("My First Program");
    label->resize(512,288);
    label->setAlignment(Qt::AlignCenter);
    label->show();
    return a.exec();
}
