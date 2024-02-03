#include<iostream>
using namespace std;

class Base
{
public:
	int fun() { 
	    
	    cout << "Base::fun() called";
	    return -1;
	
	    
	}
	int fun(int i) {          // this function is get hidden in the derived class 
                               // beacause it  overrides the method with the name fun() so all the method of the parent class  with this name
                             //get overrhide in the derived class   
	    cout << "Base::fun(int i) called";
	     return -1;
	}
};

class Derived: public Base
{
public:
	int fun() {
	     cout << "Derived::fun() called";
	     return -1;
	    }
};

int main()
{
	Derived d;
	//d.fun(5);   // what we thin that this is availabe in the derived class (inherited from the parent) )
	return 0;       // but actually it get hidden 
}
