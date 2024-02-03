#include<iostream>

using namespace std;

class A{
    public:
    int i;
};

class B:public A{

    public:
    int j;
};

class C:public A{

    public:
    int k;
};

class D:public B,public C{

    public :
    int l;
};

int main(){

    D d1;
    //d1.i;   //Ambigious error which i to acess don't know;

    d1.B::i=10;
    //cout<<d1.C::i;
    cout<<d1.B::i;
    

    return 0;
}