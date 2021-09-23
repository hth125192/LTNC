#include <iostream>
using namespace std;
struct Point
{
    double x, y;
    Point(){};
    Point(double _x, double _y) {x=_x, y=_y;};
};
void print1(const Point& p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
    cout << &p << endl;
}
void print2(const Point p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
    cout << &p << endl;
}
int main()
{
    Point a(0,1);
    cout << &a << endl;
    print1(a);
    print2(a);
    return 0;
}
