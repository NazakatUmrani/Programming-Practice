#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QDir>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_lineEdit_returnPressed()
{
    if(ui->lineEdit->text().isEmpty()){
        QMessageBox::warning(this, "Error", "Empty File Path");
    }
    else{
        QDir dir(ui->lineEdit->text());
        if(dir.exists()){
            QMessageBox::information(this, "Info", "Dir Exists");
        }
        else{
            QMessageBox::StandardButton button = QMessageBox::question(this, "Question", "Want to create dir?");
            if(button == QMessageBox::Yes){
                dir.mkpath(ui->lineEdit->text());
                QMessageBox::information(this,"Dir", "Dir created");
            }
            else if(button == QMessageBox::No){
                QMessageBox::information(this, "Dir", "Dir doesn't created");
            }
        }
    }
}

