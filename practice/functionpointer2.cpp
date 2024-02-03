#include<stdio.h>
#include<iostream>
using namespace std;

const int a  =10;
const int b = 20;

void print(int (*ptr)()){
    cout<<"The sum is :"<<(*ptr)()<<endl;
}

int add(){
    cout<<"Inside the function"<<endl;
    return a+b;
}
int main(){
 
  print(add);

}
