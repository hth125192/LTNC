#include <iostream>
using namespace std;
struct Point
{
    double x, y;
    Point(){};
    Point(double _x, double _y) {x=_x, y=_y;};
};
int main()
{
    Point a(0,1);
    cout << &a << endl << &a.x << endl << &a.y;
    return 0;
}
//&a.x=&a, &a.y=&a.x+8 (=size of double)
