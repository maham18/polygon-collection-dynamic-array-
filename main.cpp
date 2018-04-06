#include<iostream>
using namespace std;
#include "polygon.h"
int main()
{
polygon p1;
p1.add(*(new point(1.4,1.0)));
p1.add(*(new point(2.5,2.3)));
p1.add(*(new point(3.4,3.60)));
p1.add(*(new point(4.4,4.0)));
p1.add(*(new point(5.4,5.0)));
p1.add(*(new point(6.4,6.0)));
p1.add(*(new point(7.4,7.0)));
p1.add(*(new point(8.4,8.0)));
p1.display();
system("pause");

};