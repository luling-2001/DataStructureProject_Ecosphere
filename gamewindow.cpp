#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "mainwindow.h"

gamewindow::gamewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewindow)
{
    ui->setupUi(this);

    /////////////////////创建自定义scene类，如果需要设置scene的一些参数，需要在头文件中修改构造函数//////////////////////
    GameScene = new gameScene();

    ///////////////////创建view类//////////////////////////
    GameView = new QGraphicsView(GameScene, ui->GameWidget);//将GameView与GameScene相关联，使后续在GameScene中的动画能呈现在GameWidget中

    //////////////////////新建移动物体类，调用gameScene的additem方法，插入到GameScene中/////////////////



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
