#include<iostream>

using namespace std;

class Parent1{

  public:
     Parent1(){
        cout<<"Parent1 class constructor"<<endl;
     }

     ~Parent1(){
        cout<<"Parent1 class destructor"<<endl;
 
     }
};

class Parent2{

    public:
      Parent2(){

        cout<<"Parent2 class constructor"<<endl;
      }

      ~Parent2(){
        cout<<"Parent2 class destructor..!"<<endl;
 
     }

     
};
class Child : public Parent1,public Parent2{

    public:

     Child(){

        cout<<"Child class Constructor is get callled.."<<endl;

     }

     ~Child(){
        cout<<"child class destructor..!"<<endl;
 
     }
};

int main(){
   
    Child c1;
    return 0;
}