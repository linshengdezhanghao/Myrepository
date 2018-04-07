#include <iostream>
#include <math.h>
using namespace std;
class Point
{
public:
     void setPoint(int x, int y);
     void printPoint();

private:
     int xPos;
     int yPos;
};
Point::setPoint(int x, int y)
{
    x= y;
}
void Point::printPoint()
{
    cout<<"mylove"<<endl;
}
int main()
{
    int x=1,y=2;
    //Point::setPoint(x,y);
    return 0;
}
