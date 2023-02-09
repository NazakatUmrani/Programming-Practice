#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string.h>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/rec/about.png"),"Nazakat-21SW49");
    ui->comboBox->addItem(QIcon(":/rec/about.png"),"Abrar-21BSCS20");
    ui->comboBox->addItem(QIcon(":/rec/about.png"),"Aamir-21SW01");
    for(int i=0; i<10; i++){
        ui->comboBox_2->addItem(QIcon(":/rec/about.png"),QString::number(i)+"_name");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Title",ui->comboBox_2->currentText());
}
