#include<stdio.h>
#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
   
   int (*ptr)(int,int);  // declaration of the function pointer 

   ptr = add;  //    assignment of the function pointer or intitalixzation 

   cout<<(*ptr)(10,20);   // calimg the function with the help of the function pointer
}