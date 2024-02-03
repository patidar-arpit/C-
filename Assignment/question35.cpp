#include<iostream>

using namespace std;

int main(){

    int n;
    double avg;
    double sum=0;
    cout<<"Enter the no of subjects:";
    cin>>n;
    
    double *arr=new double[n];

    cout<<"Enter the marks of subjects:";

    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    avg=(double) (sum/n);

    cout<<avg<<endl;
    
    delete [] arr;

}