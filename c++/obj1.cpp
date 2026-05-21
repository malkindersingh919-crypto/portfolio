#include <iostream>
using namespace std;

class vehicle{
    public:
    string name;
    string engine;
    string colour;
    string type;
    int num;
};

class car : public vehicle{
    

};
class bus : public vehicle{
    

};
class jeep : public vehicle{
    

};

int main(){
    car a1;
    a1.name="cruze";
    a1.engine="v6";
    a1.colour="black";
    a1.num=1234;
    cout << a1.name << "\n";
    cout << a1.engine << "\n";
    cout << a1.colour << "\n";
    cout << a1.num << "\n";
    cout << "\n";

    bus a2;
    a2.name="tata";
    a2.engine="v8";
    a2.colour="red";
    a2.num=4363;
    cout << a2.name << "\n";
    cout << a2.engine << "\n";
    cout << a2.colour << "\n";
    cout << a2.num << "\n";
    cout << "\n";

    jeep a3;
    a3.name="mahindra";
    a3.engine="v6";
    a3.colour="grey";
    a3.num=6432;
    cout << a3.name << "\n";
    cout << a3.engine << "\n";
    cout << a3.colour << "\n";
    cout << a3.num << "\n";
    cout << "\n";
}
