#include <iostream>
using namespace std;
struct Point
{
    double x, y;
    Point(){};
    Point(double _x, double _y) {x=_x, y=_y;};
};
void print(const Point& p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}
int main()
{
    Point a;
    Point b(0,1);
    print(a);
    print(b);
    return 0;
}
