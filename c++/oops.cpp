#include <iostream>
using namespace std;
// oops-> any programming language having classes, object, polymorphysm, inheritance, abstraction, encapsulation.
// class-> it is a template having some fields or their values, it is useed to create object.

class animal
{
public:
    string name;
    string sound()
    {
        return "all animal having their sound";
    }
};

class dog : public animal // parent -> child -> called inheritance
{
public:
    string sound() // override
    {
        return "barks";
    }
};
class cat : public animal // parent -> child -> called inheritance
{
public:
    string sound() // override
    {
        return "mews";
    }
};

int main(int argc, char const *argv[])
{
    dog a1;
    a1.name = "tomy";
    cout << a1.name << endl;
    cout << a1.sound() << endl;

    cat a2;
    a2.name = "kity";
    cout << a2.name << endl;
    cout << a2.sound() << endl;
    return 0;
}
