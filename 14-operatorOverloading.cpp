
#include <iostream>
using namespace std;

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
    
    float operator+(circle obj2){
       return area() + obj2.area();
    }
    
    void operator++(){
        radius+=1;
    }
    
    int getRadius(){
        return radius;
    }

};

int main()
{
    circle c1, c2;
    float sum = c1 + c2;
    cout << "the two area: " << sum << endl;
    
    ++c1;
    cout << "C1 new radius is: " <<c1.getRadius()<< endl;
    
    
}


