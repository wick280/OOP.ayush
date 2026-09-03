//2 Searching a book ID
//Write a C++ program of books with ID in an Array and search for a given book ID. Display "BookFound"if ID is present
//otherwise not present 
#include<iostream>
using namespace std;

int main(){
int book[5];
int searchID;

cout<<"Enter 5 Book IDs: \n";

for(int i=0; i<5;i++){
cin>>book[i];}


cout<<"\nEnter BookID to search: ";
cin>>searchID;

for(int i = 0; i<5;i++){
if(book[i]==searchID);
cout<<"Book Found";
return 0;}


cout<<"Book not found";
return 0;
}