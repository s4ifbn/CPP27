// another friend class example
#include <iostream>
using namespace std;

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

    friend class teacher;
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

    void assignMarks(student &s1, student &s2)
    {

        s1.mark = 45;
        s2.mark = 45;

        s1.mark += ReportMark;
        s2.mark += ReportMark;
    }
};

int main()
{

    student s1("Tahseen", 2);
    student s2("sara", 2);

    s1.print();
    s2.print();

    teacher t1("salwan", 800);

    t1.assignMarks(s1, s2);

    s1.print();
    s2.print();

    return 0;
}