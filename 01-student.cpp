// Simple Student Class
#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    float deg[6];

public:
    student()
    {
        cout << "Enter students name: ";
        cin >> name>> age;

        for (int i = 0; i < 6; i++)
        {
            cout << "Enter a degree: ";
            cin >> deg[i];
        }
    }

    float average()
    {
        int i = 0;
        int s = 0;
        while (i < 6)
        {
            s += deg[i++];
        }
        float v = s / 6.0;
        return v;
    }

    string getName()
    {
        return name;
    }

    int getAge(){
        return age;
    }
};

int main()
{
    student s1;
    cout << s1.getName();
}