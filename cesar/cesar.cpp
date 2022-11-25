#include "cesar.h"
#include "ui_cesar.h"
#include "krypts.h"
#include <QString>

cesar::cesar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cesar)
{
    ui->setupUi(this);
}

cesar::~cesar()
{
    delete ui;
}

void cesar::on_pushButton_clicked()
{
    QString slovo;
    int numba;
    krypts sh;
    slovo = ui->lineEdit->text();
    sh.setWord(slovo);
    numba = ui->spinBox->value();
    ui->lineEdit_2->setText(sh.cesartry_numba_one(numba));
}

void cesar::on_pushButton_2_clicked()
{
    QString word;
    QString slogan;
    krypts losyng;
    word = ui->lineEdit_3->text();
    slogan = ui->lineEdit_4->text();
    losyng.setWord(word);
    ui->lineEdit_5->setText(losyng.slogan_crypt(slogan));

}
