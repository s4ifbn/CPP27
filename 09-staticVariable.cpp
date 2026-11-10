// Static Variable Example
#include <iostream>
using namespace std;

class circle{
private:
    int radius;
    static int totalCircles;
    const float PI=3.14;
public:
    circle(){
        cout << "Enter circle radius: ";
        cin >> radius;
        totalCircles ++;
    }
    
    float area(){
        float totalArea = radius * radius * PI;
        return totalArea;
    }
    
    static int getTotalCircles(){
        return totalCircles;
    }

};

int circle::totalCircles = 0;

int main(){
    circle c1, c2, c3;
    
    cout << "the circle area is : " <<c1.area()<<endl;
    cout << "the circle area is : " <<c2.area()<<endl;
   
    cout << "the number of cirlces is: " <<circle::getTotalCircles();
    
    return 0;
}