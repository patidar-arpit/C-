// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

class Point {
public:
	Point() { cout << "Normal Constructor called\n"; }
	Point(const Point &t) { cout << "Copy constructor called\n"; }
};

int main()
{
Point *t1, *t2;
t1 = new Point();
t2 = new Point(*t1);
Point t3 = *t1;
Point t5 = t3;
Point t4;
t4 = t3; // Assignment operator is get called 
return 0;
}