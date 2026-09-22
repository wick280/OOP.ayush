#include <iostream>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    string dept;
    Employee(int i,string n, string d)
    {
        id=i;
        name=n;
        dept=d;
        cout<<"Employee record created"<<endl;
    }
    ~Employee()
    {
        cout<<"Employee record destroyed"<<endl;
    }
};
int main()
{
    Employee e1(200,"ayush","sales");
    cout<<"Employee ID: "<<e1.id<<endl;
    cout<<"Employee Name="<<e1.name<<endl;
    cout<<"Employee Dept: "<<e1.dept<<endl;
    return 0;
}