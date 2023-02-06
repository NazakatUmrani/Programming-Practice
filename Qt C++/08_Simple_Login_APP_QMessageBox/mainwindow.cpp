#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete secDialog;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    if(username.toStdString() == "test" && password.toStdString() == "test"){
        QMessageBox::information(this,"Login", "Login Successful");
        hide();
        secDialog = new SecDialog;
        secDialog->show();
    }
    else{
        QMessageBox::critical(this,"Login", "Login Failed");
    }
}
