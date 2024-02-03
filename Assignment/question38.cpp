#include<iostream>

using namespace std;

int Multiply(int a,int b,int c=1,int d=1){

   return a*b*c*d;
}


int main(){

    cout<<Multiply(1,2,3,4)<<endl;
    cout<<Multiply(2,3)<<endl;
    cout<<Multiply(5,4,5)<<endl;
    return 0;
}