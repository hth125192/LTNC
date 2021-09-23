#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int x=rand()%101, y=rand()%101;
    while (x==y) y=rand()%101;
    cout << x << endl;
    cout << ((x<50) ? "Bob choose the rest?\n" : "Bob choose this number?\n");
    system("pause");
    cout << (((x<50 && y<x) || (x>=50 && y>x)) ? "Bob lose!" : "Bob win!");
    return 0;
}
