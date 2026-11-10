// Write an OOP program in C++ to calculate the summation of
// areas of two circles and two squares, using friend function.
// Quiz 2 solution:

#include <iostream>
using namespace std;
class square;
class circle{
private:
    int radius;
    const float pi=3.14;
public:
    circle(){
        cout << "Enter radius value: ";
        cin >> radius;
    }
    float area(){
        return pi*radius*radius;
    }
    
    friend float sum(square, square, circle, circle);
};

class square{
private:
    int length;
public:
    square(){
        cout << "Enter square length: ";
        cin >> length;
    }
    float area(){
        return length*length;
    }
    friend float sum(square, square, circle, circle);
};

int main()
{
    circle c1, c2;
    square s1, s2;
        
    cout << "Total area: " << sum(s1, s2, c1, c2) << endl;
}

float sum(square s1, square s2, circle c1, circle c2){
    float s = s1.area() + s2.area() + c1.area() + c2.area();
    return s;
}
