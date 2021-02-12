#include "baseobject.h"
#include <QTime>

baseObject::baseObject()
{
    //以当前系统时间创建随机数生成种子
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

baseObject::~baseObject(){

}

double baseObject::getVelocity(){
    return velocity;
}

double baseObject::getLifecycle(){
    return lifecycle;
}

void baseObject::setVelocity(double velocity){
    this->velocity = velocity;
}

void baseObject::setLifecycle(double lifecycle){
    this->lifecycle = lifecycle;
}

void baseObject::move(){
    //获取当前位置
    int pre_X = getX();
    int pre_Y = getY();

    //生成0-3的随机数
    int i = qrand() % 4;
    int new_X = pre_X + dir[i][0];
    int new_Y = pre_Y + dir[i][1];

    /////////////////////最后实现时要先判断碰撞情况后设置新位置///////////////////////

    //设置新位置
    setX(new_X);
    setY(new_Y);
}
