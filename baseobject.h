#ifndef BASEOBJECT_H
#define BASEOBJECT_H

/*
 * QGraghicsItem类是QGraphicsScene中所有item的基类
 * QGraphicsPixmapItem是QGraphicsItem的子类
 * QGraphicsPixmapItem类提供了一个图像项，可以添加到QGraphicsScene中
 * 要设置item的图像，可以将QPixmap传递到QGraphicsPixmapItem的构造函数中，或调用setPixmap()函数，pixmap()用于返回当前的图像。
 * 图像在item的 (0, 0) 坐标处绘制，由offset()返回。可以通过调用setOffset()更改绘图偏移量。
*/


#include <QGraphicsPixmapItem>


//基本物体类，作为所有移动物体的基类，继承自QGraphicsPixmapItem类
class baseObject : public QGraphicsPixmapItem
{
public:

    baseObject();
    ~baseObject();

    double getVelocity();//得到速度
    double getLifecycle();//得到生命周期

    void setVelocity(double);//设置速度
    void setLifecycle(double);//设置生命周期
    
    int getX() const{return X;} //获得当前逻辑位置X
    int getY() const{return Y;} //获得当前逻辑位置Y
    
    void setX(int X){this->X = X;}//设置逻辑位置X
    void setY(int Y){this->Y = Y;}//设置逻辑位置Y
    
    bool isCollide();//判断是否发生碰撞，包括碰撞边界以及碰撞其他移动物体，未实现
    
    bool move();//移动函数，简单实现，需改进补充
    
    void die();//死亡函数，可以实现死亡动画，未实现

    int dir[4][2] = {{0, 1},
                     {0, -1},
                     {1, 0},
                     {-1, 0}};//标记四个移动方向

private:
    double velocity;//移动速度
    double lifecycle;//生命周期
    int X,Y;//逻辑位置

};

#endif // BASEOBJECT_H
