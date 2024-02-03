#include <iostream>

using namespace std;

class parent {
	// private destructor
	~parent() { cout << "destructor called" << endl; }

  public:
	parent() { cout << "constructor called" << endl; }
};


int main()
{
	//parent p; // contructor is get called  // but when it is deleted the destructor is private and it not get called
	
    parent * p  = new parent();
    // now tit works fine because the object is created and it is not get deleted because it is in heap and destructor is also not get called 
}

