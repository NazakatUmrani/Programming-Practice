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
        ui->statusbar->showMessage("Login Successfull, Logging in...", 5000);
    }
    else{
        ui->statusbar->showMessage("Login Failed, Incorrect username or password!!!", 5000);
    }
}
