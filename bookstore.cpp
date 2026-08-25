#include <iostream>
using namespace std;
class book {
    public:
    float price;
    string name;
    string auth;
    float rating;
    void input(){
         cout<<"enter book name: "<<endl;
        cin>>name;
        
        cout<<"enter name of the author: ";
        cin>>auth;

        cout<<"Rate the book from 0 to 10: "<<endl;
        cin>>rating;

        cout <<"enter book price: "<<endl;
        cin>>price;
    }
    void display() {
       
        cout<< "book name is: "<<name<<endl;
        cout<< "book price is: "<<price<<endl;

    }
};

    int main(){
        book b1;
        book b2;
        b1.input();
        cout<<endl;
        b1.display();
        cout<<endl;
        cout<<endl;
        b2.input();
        cout<<endl;
        b2.display();

        
    }
    



    