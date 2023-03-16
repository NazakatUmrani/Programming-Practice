#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <time.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowTitle("Guessing Game");
    srand(time(NULL));
    secretNumber = rand() % 10 + 1;
    ui->StartOverButton->setDisabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_GuessButton_clicked()
{
    if(ui->spinBox->value() == secretNumber){
        ui->MessageLabel->setText("Congratulations your guess is correct");
        ui->GuessButton->setDisabled(true);
        ui->StartOverButton->setEnabled(true);
    }
    else{
        if(ui->spinBox->value() > secretNumber){
            ui->MessageLabel->setText("Number is lower than your guess");
        }
        else if(ui->spinBox->value() < secretNumber){
            ui->MessageLabel->setText("Number is Higher than your guess");
        }
    }
}

void MainWindow::on_StartOverButton_clicked()
{
    secretNumber = rand() % 10 + 1;
    ui->MessageLabel->setText("");
    ui->StartOverButton->setDisabled(true);
    ui->GuessButton->setEnabled(true);
}
