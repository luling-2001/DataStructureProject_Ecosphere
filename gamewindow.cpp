#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "mainwindow.h"

gamewindow::gamewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);
}

gamewindow::~gamewindow()
{
    delete ui;
}

void gamewindow::on_back_pushButton_clicked()
{
    //单击back，返回mainwindow
    MainWindow *w = new MainWindow();
    w->show();
    this->close();
}

void gamewindow::on_reset_pushButton_clicked()
{
    //单击reset按钮，所有参数清零
    grassesNumber = 0;
    ui->grassesNumber_spinBox->setValue(0);

    cowsNumber = 0;
    ui->cowsNumber_spinBox->setValue(0);

    tigersNumber = 0;
    ui->tigersNumber_spinBox->setValue(0);
}
