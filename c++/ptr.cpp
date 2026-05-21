#include <iostream>
#include <string>
using namespace std;

// int main()
// {

//     int num = 4;
//     int *ptr = &num;

//     cout << "num:" << num<<"\n";
//     cout << "num:" << &num<<"\n";
// }

void ptrfunc(int *ptr) // access by pointer
{
    *ptr = 8;
}

void reffunc(int &n) // access by refrecnce
{
    n = 8;
}
void ptrtoptr(int **ptr)
{
    **ptr = 8;
}

int main()
{
    int num = 5;
    // ptrfunc(&num);//pass by refrence
    // reffunc(num); // pass by arguments
    int *ptr = &num;
    ptrtoptr(&ptr);
    // *ptr=8;

    cout << "num:" << num << "\n";
    cout << "ptr:" << *ptr << "\n";
}
