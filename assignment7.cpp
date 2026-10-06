#include <iostream>
using namespace std;

class person {
public:
    string name;
    int age;
    int contact;

    person(string name, int age, int contact) {
        this->age = age;
        this->name = name;
        this->contact = contact;
    }

    void take() {
        cout << "What's the name of the student?" << endl;
        cin >> name;

        cout << "What's the age?" << endl;
        cin >> age;

        cout << "What are the contact details?" << endl;
        cin >> contact;
    }

    void show() {
        cout << "The name is: " << name << endl;
        cout << "Age is: " << age << endl;
        cout << "The contact details are: " << contact << endl;
    }
};


class student : public person {
public:
    int rollNo;
    string department;

    student(int rollNo, string department) : person("", 0, 0) {
        this->rollNo = rollNo;
        this->department = department;
    }

    void input() {
        cout << "What's the rollNo?" << endl;
        cin >> rollNo;

        cout << "What's the department?" << endl;
        cin >> department;
    }

    void display() {
        cout << "The rollNo of the student is: " << rollNo << endl;
        cout << "The department is: " << department << endl;
    }
};


int main() {
    person p1("ayush", 18, 8934639);
    student s1(8, "AI");

    p1.take();
    p1.show();

    s1.input();
    s1.display();

    return 0;
}








  
