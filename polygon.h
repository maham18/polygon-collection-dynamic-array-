#include<iostream>
#include<string>
#include "point.h"
using namespace std;
int i;
class polygon
{
public:
polygon() //constructor
{
this->index=0;
this->size=5;
list = new point [5];
};

polygon(float totalcost , point *list) //constructor
{
this->list=list;
};
polygon(polygon & clone) //constructor
{
this->index=clone.index;
this->list=clone.list;
this->size=clone.size;
};
void setindex(int index) //setter
{
this->index=index;
};
int getindex() //getter
{
return this->index;
};

void add(point &d) //For adding points in collection
{
if(index < size )
{
list[index] = d;
index++;
}
else
{
incsize(d);
}
};
void display() //display function
{

cout<< " MY COLLECTION OF POLYGON POINTS"<<endl;
for(i=0;i<index;i++)
{
cout << this->list[i] <<endl;
}
};
protected: //private function only accessable within a class
void incsize(point &d) //increase the size of an array
{
size = size * 2;
point *newlist = new point[size];
for(i=0 ; i < (size/2) ; i++)
{
newlist[i] = list[i] ;
}
delete [] list;
list = newlist ;
list[index] = d;
index++;
};

private:
point *list;
int size;
int index;
};