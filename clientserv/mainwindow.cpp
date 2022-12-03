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
    QString message;
    QString ip;
    QString name;

    message = ui->lineEdit_3->text();
    ip = ui->lineEdit->text();
    name = ui->lineEdit_2->text();

}
