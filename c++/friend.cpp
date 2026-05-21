#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int salary;
    // Declare friend function
    friend void displaySalary(Employee emp);

public:
    Employee(string name, int s)
    {
        this->name = name;
        salary = s;
    }
};

void displaySalary(Employee emp)
{
    cout << "Name: " << emp.name;
    cout << "Salary: " << emp.salary;
}

int main()
{
    Employee myEmp("hitesh",50000);
    displaySalary(myEmp);
    return 0;
}