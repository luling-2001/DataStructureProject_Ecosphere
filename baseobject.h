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

private:
    double velocity;//移动速度
    double lifecycle;//生命周期
    int x,y;//逻辑位置

};

#endif // BASEOBJECT_H
