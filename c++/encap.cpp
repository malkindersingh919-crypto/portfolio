#include <iostream>
using namespace std;

class bank
{
protected:
    string acc_name;
    int balance;

public:
    void setname(string acc_name)
    {
        this->acc_name = acc_name;
    }
    string getname()
    {
        return this->acc_name;
    }

    void setbalance(int balance)
    {
        this->balance = balance;
    }
    int getbalance()
    {
        return this->balance;
    }
    void withdraw(int amt)
    {
        if (amt <= balance)
        {
            this->balance -= amt;
        }
        else
        {
            cout << "pesa ni h account me!";
        }
    }
    void deposit(int amt)
    {
        if (amt > 0)
        {
            this->balance += amt;
        }
        else
        {
            cout << "pesa negative deposit ni hota";
        }
    }
};
class person
{
public:
    bank a;
};

int main()
{
    person p;
    p.a.setname("aakash");
    p.a.setbalance(500);
    cout << "Account Holder: " << p.a.getname() << endl;
    cout << "Balance: " << p.a.getbalance() << endl;
    p.a.withdraw(200);
    p.a.withdraw(200);
    cout << "Balance: " << p.a.getbalance() << endl;

    return 0;
}