#include <iostream>

using namespace std;

class parent {
	// private destructor
	~parent() { cout << "destructor called" << endl; }

public:
	parent() { cout << "constructor called" << endl; }
	void destruct() { 
	    delete this;  // current object who is calling it is               get deleted 
	    
	}
};

int main()
{
	parent* p;
	p = new parent; // contructor is get called
	
	// destructor called
	p->destruct();

	return 0;
}

