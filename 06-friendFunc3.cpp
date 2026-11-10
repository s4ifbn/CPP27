// another friend function example

#include <iostream>
using namespace std;

class teacher; // forward declaration

class student
{
private:
    string name;
    int level;
    int mark;

public:
    student(string n, int v)
    {
        name = n;
        level = v;
        mark = 0;
    }

    void print()
    {
        cout << name << " " << level << " " << mark << endl;
    }

    friend void assignMarks(student &, student &, teacher);
};

class teacher
{
private:
    string name;
    int sal;
    int ReportMark;

public:
    teacher(string n, int s)
    {
        name = n;
        sal = s;
        ReportMark = 5;
    }

    friend void assignMarks(student &, student &, teacher);
};

int main()
{

    student s1("Tahseen", 2);
    student s2("sara", 2);

    s1.print();
    s2.print();

    teacher t1("salwan", 800);

    assignMarks(s1, s2, t1);

    s1.print();
    s2.print();

    return 0;
}

void assignMarks(student &s1, student &s2, teacher t1)
{

    s1.mark = 45;
    s2.mark = 45;

    s1.mark += t1.ReportMark;
    s2.mark += t1.ReportMark;
}