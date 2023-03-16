#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //One way, Previous windows becomes dim
        //SecDialog secDialog;
        //secDialog.setModal(true);
        //secDialog.exec();

    //Second way, Opening a new window and previous window is also accessible
        //secDialogObj = new SecDialog(this);
        //secDialogObj->show();

    //Second way, Opening a new window and previous window is hidden
        hide();
        secDialogObj = new SecDialog(this);
        secDialogObj->show();
}
