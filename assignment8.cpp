#include <iostream>
using namespace std;


class Person {
public:
    string name;
    int age;

    void getPerson() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    int employeeID;
    double salary;

    void getEmployee() {
        cout << "Enter employee ID: ";
        cin >> employeeID;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayEmployee() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void getManager() {
        cout << "Enter department: ";
        cin >> department;
    }

    void displayManager() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.getPerson();
    m.getEmployee();
    m.getManager();

    cout << "\n--- Manager Details ---" << endl;

    m.displayPerson();
    m.displayEmployee();
    m.displayManager();

    return 0;
}
