#include<iostream>
using namespace std;
class point
{
public:
point ()
{
this->x=0;
this->y=0;
};
point (float a,float b)
{
this->x = a;
this->y = b;
};
point(point& clone)
{
this->x=clone.x;
this->y=clone.y;
};
void setx(float a)
{
this->x = a;
};
void sety(float b)
{
this->y= b;
};
float getx()
{
return this->x;
};
float gety()
{
return this->y;
};
void display()
{
cout<<"Point x :" << this->x << endl << "Point y :" <<this->y <<endl;

};

private:
float x;
float y;
};
ostream& operator<<(ostream& o,point x)
{
return o<<"("<<x.getx()<<","<<x.gety()<<")"<<endl;

};