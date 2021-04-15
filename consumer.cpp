#include "consumer.h"
#include <QTime>

consumer::consumer()
{

}

void consumer::move(){
    //获取当前位置
    int pre_X = getX();
    int pre_Y = getY();

    //生成0-3的随机数
    //以当前系统时间创建随机数生成种子
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int i = qrand() % 4;
    int new_X = pre_X + dir[i][0];
    int new_Y = pre_Y + dir[i][1];

    /////////////////////最后实现时要先判断碰撞情况后设置新位置///////////////////////

    //设置新位置
    setX(new_X);
    setY(new_Y);
}
