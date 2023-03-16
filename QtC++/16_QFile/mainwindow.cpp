#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
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


void MainWindow::on_writeButton_clicked()
{
    QFile file("myFile.txt");
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text)){

        ui->statusBar->showMessage("File Write Unsuccessful",5000);
    }
    else{
        QTextStream write(&file);
        write << ui->plainTextEdit->toPlainText();
        file.flush();
        file.close();
        ui->statusBar->showMessage("File Write Successful",5000);
    }
}

void MainWindow::on_readButton_clicked()
{
    QFile file("myFile.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){

        ui->statusBar->showMessage("File Read Unsuccessful",5000);
    }
    else{
        QTextStream read(&file);
        ui->plainTextEdit->clear();
        ui->plainTextEdit->setPlainText(read.readAll());
        file.close();
        ui->statusBar->showMessage("File Read Successful",5000);
    }
}

