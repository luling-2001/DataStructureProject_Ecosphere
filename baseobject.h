#ifndef BASEOBJECT_H
#define BASEOBJECT_H


class baseObject
{
public:
    baseObject();
    ~baseObject();
    double getVelocity();
    double getLifecycle();

    void setVelocity(double);
    void setLifecycle(double);

private:
    double velocity;//移动速度
    double lifecycle;//生命周期

};

#endif // BASEOBJECT_H
