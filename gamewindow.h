#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QGraphicsView>

#include "gamescene.h"

namespace Ui {
class gamewindow;
}

//gamewindow是整个生态圈的主要界面
class gamewindow : public QWidget
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = nullptr);
    ~gamewindow();

private slots:
    void on_back_pushButton_clicked();

    void on_reset_pushButton_clicked();

private:
    Ui::gamewindow *ui;//程序界面指针
    QGraphicsView *GameView;//图形视角view类（用来对场景进行显示）
    gameScene *GameScene;//自定义图形场景scene类（需要依赖图形视角进行显示）

    int grassesNumber;
    int cowsNumber;
    int tigersNumber;
};

#endif // GAMEWINDOW_H
