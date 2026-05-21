#include <iostream>
#include"hello.cpp"
using namespace std;
using namespace n1;

int main()
{
    std::string name;

    std::cout<<"enter your name"<<"\n";
    // fgets(name,100,stdin);
    std::getline(std::cin,name);
    // cin>> name;
    std::cout <<"my name is: "<< name;

    // n1::bolobhai();
    bolobhai();
}