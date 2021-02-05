#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->start_pushButton->setStyleSheet(
                //在鼠标经过时改变按钮文本的颜色
                "QPushButton:hover{"
                "font: 40pt Forte;"
                "color: rgb(0, 0, 0);"
                "background-color: rgb(0, 0, 0, 0);"
                "}"

                "QPushButton{"
                "font: 40pt Forte;"
                "color: rgb(67, 135, 0);"
                "background-color: rgb(0, 0, 0, 0);"
                "}"

                );
    ui->quit_pushButton->setStyleSheet(
                "QPushButton:hover{"
                "font: 40pt Forte;"
                "color: rgb(0, 0, 0);"
                "background-color: rgb(0, 0, 0, 0);"
                "}"

                "QPushButton{"
                "font: 40pt Forte;"
                "color: rgb(67, 135, 0);"
                "background-color: rgb(0, 0, 0, 0);"
                "}"

                );
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_quit_pushButton_clicked()
{
    //单击quit按钮时，关闭当前窗口并退出程序
    QApplication::exit();
}

void MainWindow::on_start_pushButton_clicked()
{
    //单击start按钮，进入gamewindow界面
    gamewindow *w = new gamewindow();
    w->show();
    this->close();
}


