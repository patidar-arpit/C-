#include<iostream>

using namespace std;

class Parent1{

  public:
     Parent1(int a){
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
class Child : public Parent2,public Parent1{

    public:

     Child(int x):Parent1(x){

        cout<<"Child class Constructor is get callled.."<<endl;

     }

     ~Child(){
        cout<<"child class destructor..!"<<endl;
 
     }
};

int main(){
   
    Child c1(10);
    return 0;
}