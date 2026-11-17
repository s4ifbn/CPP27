// Single inheritance between person and employee
#include <iostream>
using namespace std;

class person{
private:
    string name;
    int age;
    string address;
public:
    person(){
        cin >> name >> age >> address;
    }
};

class emp : public person{
private:
    int sal;
public:
    emp(){
        cin >> name >> age >> address>> sal;
    }
};

int main()
{
    person p1, p2;
    emp e1, e2;
}
