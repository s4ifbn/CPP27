// array of objects example
#include <iostream>
using namespace std;

class product
{
private:
    string name;
    int id;
    int price;

public:
    product(string name, int id, int price)
    {
        this->name = name;
        this->id = id;
        this->price = price;
    }

    product()
    {
        cout << "Enter product information: ";
        cin >> name >> id >> price;
    }

    void print()
    {
        cout << name << " " << id << " " << price << endl;
    }

    void setPrice()
    {
        price += 1000;
    }
};

int main()
{

    product p[5] = {
        product("kitkat", 224, 500),
        product("milk", 56, 1500),
        product("water", 567, 250),
        product("bread", 10, 1000),
        product("perfume", 1760, 10000),
    };

    for (int i = 0; i < 5; i++)
        p[i].print();

    cout << "-----------\n";

    for (int i = 0; i < 5; i++)
        p[i].setPrice();

    for (int i = 0; i < 5; i++)
        p[i].print();

    cout << "-----------\n";
}