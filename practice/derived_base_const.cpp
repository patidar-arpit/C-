#include<iostream>
using namespace std;
 
class Base {

     
public:
    int i, j;
    Base(int _i =0 , int _j =0) {
        // // eqiuivalent to the non parametrized consturctor 
        // so from derived class by default complier will call this constructor on making the object of the derived class 
        i  = _i;
        j  = _j;
    } 
};
class Derived: public Base {
public:
    
    Derived(){
        
    }
     void show(){
        cout<<" i = "<<i<<"  j = "<<j;
     }
};
int main(void) {
  Derived d;
  d.show();
  return 0;
}