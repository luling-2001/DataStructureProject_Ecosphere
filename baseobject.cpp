#include "baseobject.h"
#include <QTime>

baseObject::baseObject()
{
    //调用构造函数时的时间存储到start_time中
    start_time = QTime(0,0,0).secsTo(QTime::currentTime());

}

baseObject::~baseObject(){

}

double baseObject::getLifecycle(){
    return lifecycle;
}

double baseObject::getEnergy(){
    return energy;
}

void baseObject::setLifecycle(double lifecycle){
    this->lifecycle = lifecycle;
}

void baseObject::setEnergy(double energy){
    this->energy = energy;
}





void baseObject::die(){
    //////////////////////死亡情况分三种讨论/////////////////////////

    //////////////////////1.存活时间等于生命周期lifecycle////////////////
    //获取新的时间
    int end_time = QTime(0,0,0).secsTo(QTime::currentTime());
    if(end_time - getStartTime() == lifecycle){

        //该生物死亡（死亡动画，该部分未实现

    }

    /////////////////////2.自身能量energy不足死去///////////////////
    if(getEnergy() == 0){

        //该生物死亡

    }

    /////////////////////3.碰见上一级捕食者/////////////////////////

}

