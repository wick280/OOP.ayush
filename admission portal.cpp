/*a college admission portal allows students to update their profiles online
design a student class that correctly assigs the submited details to the respective data members
even when the input variable names are same as the class attributes*/

#include<iostream>
using namespace std;

class student{
    public:
    int ID, rollNO;
    string name, email;

    student(){
    ID = 99999;
    rollNO = 1234;
    name = "XXXXXX";
    email = "baburao48484@gmail.com";
    }




    student(int ID, int rollNO, string name, string email){
        this->ID = ID;
        this->rollNO = rollNO;
        this->name = name;
        this->email = email;
    }

    void input(){
        cout<<"whats the name of the student: ";
        cin>>name;
        cout<<endl;
        cout<<"what the email of the studen: ";
        cin>>email;
        cout<<endl;
        cout<<"input ID of student";
        cin>>ID;
        cout<<endl;
        cout<<"input roll no: ";
        cin>>rollNO;


    }



    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"roll NO is: "<<rollNO<<endl;
        cout<<"ID is: "<<ID<<endl;
    }
};



int main(){
    student s1;
    s1.input();
    s1.display();
    
    return 0;

}

