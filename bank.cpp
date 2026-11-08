// Simple Bank Class
#include <iostream>
using namespace std;

class Alrasheed
{
private:
    int ID;
    string name;
    int balance;

public:
    Alrasheed(int i, string n, int b)
    {
        ID = i;
        name = n;
        balance = b;
    }

    void deposit(int b)
    {
        balance += b;
    }

    void withdraw(int b)
    {
        if (b > balance)
            cout << "Not enough balance.";
        else
            balance -= b;
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Alrasheed C1(123, "Osama", 500), C2(124, "Adil", 300);
}