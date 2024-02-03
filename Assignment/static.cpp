/*
#include<iostream>
using namespace std;

class A{
    int a;
    static int st_a;

    public:
    A(){
     cout<<"A constructor called.!"<<endl;
    }

    static void st_A(){
        ++st_a;
    }
    static int geta(){
        return st_a;
    }
    static int R(int n){
        st_a=n;
        st_a++;
        return st_a;
    }
};
 
int A::st_a=5;

int main(){
     A a1;
     A a2;

     cout<<a1.geta()<<endl;  //5
     a1.st_A();
     cout<<a1.geta()<<endl;  //6

     A::st_A();           
     cout<<a1.geta()<<endl; //7

     cout<<a2.geta()<<endl; //7
     
     cout<<a1.R(10)<<endl; //11

     cout<<a1.geta()<<endl; //11
     cout<<a2.geta()<<endl; //11

    return 0;
} */
