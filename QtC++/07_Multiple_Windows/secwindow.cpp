#include "secwindow.h"
#include "ui_secwindow.h"

SecWindow::SecWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
}

SecWindow::~SecWindow()
{
    delete ui;
}
