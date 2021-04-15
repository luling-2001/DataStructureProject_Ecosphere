#ifndef CONSUMER_H
#define CONSUMER_H
#include "baseobject.h"

//consumer类继承自baseObject类
class consumer : public baseObject
{
public:
    consumer();

    virtual void move();//virtual移动函数，简单实现，需改进成基于BFS结构的移动方式，在cow和tiger中需要重写
};

#endif // CONSUMER_H
