// array of objects example
#include <iostream>
using namespace std;

class point{
    private:
        int x, y;
    public:
        point(){
            cout << "Enter point coordinates: ";
            cin >> x >> y;
        }

        point(int x, int y){
            this->x = x;
            this->y = y;
        }
    
    int getX(){
        return x;
    }
    
    int getY(){
        return y;
    }
    
    void printPoint(){
        cout << x <<" "<< y << endl;
    }
    
};

class line{
private:
    point startPoint, endPoint;
public:
    
    line(int x1, int y1, int x2, int y2):startPoint(x1, y1),endPoint(x2, y2){
        
    }
    
    void printLine1(){
        cout << startPoint.getX() <<" "<< startPoint.getY() << endl;
        
        cout << endPoint.getX()<< " "<< endPoint.getY() << endl;
    }
    
    void printLine2(){
        startPoint.printPoint();
        endPoint.printPoint();
    }

};

int main()
{
    line L1(3,4,5,7);
    L1.printLine2();
}
