#include<iostream>

using namespace std;

typedef struct Book BOOK;

struct Book
{
    int book_id;
    char title[20];
    int price;

};

void Accept(BOOK &b1){

   cout<<"Enter the book_id:";
   cin>>b1.book_id;

   cout<<"Enter the title of book:";
   cin>>b1.title;

   cout<<"Enter the price:";
   cin>>b1.price;
}

 void Display(BOOK &b1){

    cout<<b1.book_id<<endl;
    cout<<b1.price<<endl;
    cout<<b1.title<<endl;
 }

int main(){
   BOOK brr [3];
   
   for(int i=0;i<3;i++){
       Accept(brr[i]);
   }

   for(int i=0;i<3;i++){

      Display(brr[i]);
   }


    return 0;
}