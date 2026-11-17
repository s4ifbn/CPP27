// Binary operator overloading with object return
#include <iostream>
using namespace std;

class point{
private:
    int x, y;
public:
    point(){
        cin >> x >> y;
    }
    
    point(int x, int y){
        this->x = x;
        this->y = y;
    }
    
    void printPoint(){
        cout << x << " " <<y <<endl;
    }
    
    point operator+(point p2){
        int x3 = x + p2.x;
        int y3 = y + p2.y;
        
        point temp(x3, y3);
        return temp;
    }
    
    point operator-(point p1){
        int x3 = x - p1.x;
        int y3 = y - p1.y;
        
        point temp(x3, y3);
        return temp;
    }
};

int main()
{
    point p1(2, 2);
    point p2(5, 4);
    
    point p3 = p1 + p2;
    point p4 = p2 - p1;
    
    p3.printPoint();
    p4.printPoint();
    
}
