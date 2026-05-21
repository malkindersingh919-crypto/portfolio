#include <iostream>
using namespace std;

class animal
{
protected:
    string name;

public:
    string bread;
    int age;
    virtual string sound() = 0;
    // virtual string sound()
    // {
    //     return "all animal have there own sound";
    // };
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return this->name;
    }
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
    animal *a;
    // a = new animal();
    // cout << a->sound()<<endl;

    a = new dog();
    a->setname("tommy");
    cout << a->getname() << endl;
    // a->name = "tommy";
    // cout << a->name << endl;
    cout << a->sound() << endl;

    a = new cat();
    a->setname("kitty");
    cout << a->getname() << endl;
    cout << a->sound() << endl;

    // dog *d = new dog();
    // d->sound();

    // cat *c = new cat();
    // c->sound();
}