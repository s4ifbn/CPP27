// Write an OOP program in C++ to calculate the summation of
// areas of two circles and two squares, using friend function.
// Quiz two solution:

#include <iostream>
using namespace std;
class circle{
private:
    int radius;
    const int pi=3.14;
public:
    circle(){
        cout << "Enter radius value: ";
        cin >> radius;
    }
    int area(){
        return pi*radius*radius;
    }
};

class square{
private:
    int length;
public:
    square(){
        cout << "Enter square length: ";
        cin >> length;
    }
    int area(){
        return length*length;
    }
};

int main()
{
    circle c1, c2;
    square s1, s2;
    
    int sum = c1.area() + c2.area() + s1.area() + s2.area();
    
    cout << "Total area: " << sum << endl;
}
