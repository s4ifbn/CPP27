// Friend Function Between Two different classes
#include <iostream>
using namespace std;

class Alrasheed; // forward declaration

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

    friend void transfer(Alrasheed &C1, Alrafidien &C2);
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

    friend void transfer(Alrasheed &C1, Alrafidien &C2);
};

int main()
{

    Alrasheed C1(123, "Osama", 500);
    Alrafidien C2(124, "Adil", 300);

    transfer(C1, C2);

    cout << C1.getBalance() << " " << C2.getBalance() << endl;
}

void transfer(Alrasheed &C1, Alrafidien &C2)
{

    int amount = 0;
    cout << "How much ?: ";
    cin >> amount;

    C1.balance -= amount;
    C2.balance += amount;
}