#include "baseobject.h"

baseObject::baseObject()
{

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
