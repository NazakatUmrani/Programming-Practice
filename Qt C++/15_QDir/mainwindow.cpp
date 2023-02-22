#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include <dialog.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    foreach (QFileInfo var, dir->drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    dir = new QDir(arg1);
    qDebug() << dir->absolutePath();
    ui->listWidget->clear();
    foreach (QFileInfo var, dir->entryInfoList()) {
        ui->listWidget->addItem(var.canonicalFilePath());
    }
}

void MainWindow::on_pushButton_clicked()
{
        ui->comboBox->addItem(ui->listWidget->currentItem()->text());
        ui->comboBox->setCurrentIndex(ui->comboBox->findText(ui->listWidget->currentItem()->text()));
}



void MainWindow::on_pushButton_2_clicked()
{
    Dialog dia;
    dia.exec();
}

