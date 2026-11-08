// Simple Student Class with Getters
#include <iostream>
using namespace std;

class student
{
private:
    string name;
    float oopMark;
    int level;
    int age;

public:
    student()
    {
        cout << "Enter student info: ";
        cin >> name >> age >> level >> oopMark;
    }

    void setName()
    {
        cout << "Enter new name: ";
        cin >> name;
    }

    void setAge()
    {
        age++;
    }

    int getAge()
    {
        return age;
    }

    int getLevel()
    {
        return level;
    }

    float getOopMark()
    {
        return oopMark;
    }

    string getName()
    {
        return name;
    }
};

int main()
{

    student s1;

    cout << s1.getName() << " " << s1.getOopMark() << endl;
    cout << s1.getLevel() << endl;
}