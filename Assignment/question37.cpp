#include<iostream>

using namespace std;

int Add(int a,int b){
    
    return a+b;

}


double Add(double a,double b){
    
    return a+b;

}

float Add(float a,float b){
    
    return a+b;

}

int main(){
    

    cout<<Add(2,4)<<endl;
    cout<<Add(2.3,4.5)<<endl;
    cout<<Add(3.4f,4.5f)<<endl;

    return 0;
}