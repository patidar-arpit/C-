#include<iostream>
using namespace std;


struct Book
{
    int book_id;
    //char title[20];
    int price;

};

void Display(struct Book  &b1){

    cout<<b1.book_id<<endl;
    cout<<b1.price<<endl;
   // cout<<b1.title<<endl;
 }

 void copy(struct Book  &b1,struct Book  &b2){

    b1.book_id=b2.book_id;
    //b1.title=b2.title;
    b1.price=b2.price;
 }

int main(){
  
    struct Book b1;
    struct Book b2;
    struct Book b3;

    cin>>b1.book_id;
    //cin>>b1.title;
    cin>>b1.price;

    b2=b1; // copy entire structure;

    copy(b3,b1);

    Display(b1);
    Display(b2);
    Display(b3);


    return 0;
}