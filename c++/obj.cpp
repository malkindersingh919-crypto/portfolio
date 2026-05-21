#include <iostream>
using namespace std;

class animal
{
public:
    string name;
    string bread;
    int age;
    virtual string sound() = 0;
};

class dog : public animal
{
public:
    string sound() override
    {
        return "barks";
    }
};

class cat : public animal
{
public:
    string sound() override
    {
        return "mews";
    }
};

int main()
{
  
    // animal a1;//abstrsact class haveing not object

    // dog a1;
    // a1.name = "sheru";
    // a1.bread = "labra";
    // a1.age = 6;
    // cout << a1.name << "\n";
    // cout << a1.bread << "\n";
    // cout << a1.age << "\n";
    // cout << a1.sound() << "\n";
    // cout << "\n";

    // cat a2;
    // a2.name = "kittti";
    // a2.bread = "shezu";
    // a2.age = 2;
    // cout << a2.name << "\n";
    // cout << a2.bread << "\n";
    // cout << a2.age << "\n";
    // cout << a2.sound() << "\n";
}