// Friend Class Example
#include <iostream>
using namespace std;

class Alrafidien
{
private:
    int ID;
    string name;
    int balance;

public:
    Alrafidien(int i, string n, int b)
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

    friend class Alrasheed; // all methods in the second class will become friend functions to the first class
};

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

    void transfer(Alrafidien &C1)
    {

        int amount = 0;
        cout << "How much ?: ";
        cin >> amount;

        C1.balance -= amount;
        balance += amount;
    }
};

int main()
{

    Alrafidien C1(124, "Adil", 300);
    Alrasheed C2(123, "Osama", 500);

    C2.transfer(C1);

    cout << C1.getBalance() << " " << C2.getBalance() << endl;
}