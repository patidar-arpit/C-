#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    
    int t;
    cin>>t;
  
    int q;
    cin>>q;
    
    int** a = new int*[t];
    int i = 0;
    while(i<t){
        int size;
        cin>>size;
        
        a[i] = new int[size];
        for(int j = 0;j<size;j++){
            
            cin>>a[i][j];
            
        }
        
        i++;
    }
 
    for(int j=0;j<q;j++){
        int num1;
        cin>>num1;
        int pos;
        cin>>pos;
        
        cout<<a[num1][pos]<<endl;
        
    }
    return 0;
}
