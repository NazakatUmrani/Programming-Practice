#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *list = new QListWidgetItem(QIcon(":/rec/about.png"),"Nazakat-21SW49");
    ui->listWidget->addItem(list);
    list = new QListWidgetItem(QIcon(":/rec/about.png"),"Abrar-21BSCS20");
    ui->listWidget->addItem(list);
    list = new QListWidgetItem(QIcon(":/rec/about.png"),"Aamir-21SW01");
    ui->listWidget->addItem(list);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   QMessageBox::information(this,"Title",ui->listWidget->currentItem()->text());
   ui->listWidget->currentItem()->setBackground(Qt::red);
   ui->listWidget->currentItem()->setForeground(Qt::black);
}
