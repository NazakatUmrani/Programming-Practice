#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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
    QMessageBox::about(this, "About", "This is a About QMessageBox");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::critical(this,"Critical","This is a Critical QMessageBox");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this, "Warning", "This is a Warning QMessageBox");
}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::question(this,"Question", "This is a Question QMessageBox");
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::information(this,"Information","This is a Information QMessageBox");
}

