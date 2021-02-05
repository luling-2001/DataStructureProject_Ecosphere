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
