#include<iostream>
using namespace std;
class Point {
	int x;
public:
	Point() { cout<<"Normal Contructor\n"; }
	Point(Point &p) { cout<<"Copy Contructor will get called";}
};

int main()
{
Point p1;
Point p2 = p1;
return 0;
}
