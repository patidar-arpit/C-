#include<iostream>

using namespace std;

int main(){

   string str = "Hello Arpit Patidar";
   string temp = "";
   string * ptr = new string[str.size()];
   int j = 0;
 
      for(int i=0; i<(int)str.size(); i++){
        // If cur char is not del, then append it to the cur "word", otherwise
          // you have completed the word, print it, and start a new word.
         if(str[i] != ' '){
            temp += str[i];
        }
          else{
              ptr[j] = temp;
              j++;
              temp = "";
        }
    }
     ptr[j] = temp; 
     j++; 

    for(int i=0; i<j;i++){
         cout << ptr[i] << " ";
    }

    return 0;
}