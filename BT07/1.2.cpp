#include <iostream>
using namespace std;
int f1(int a[])
{
    return sizeof(a);
}
int f2(int a[4])
{
    return sizeof(a);
}
int main()
{
    int a[1]={0};
    cout << sizeof(a) << ' ' << f1(a) << ' ' << f2(a);
}
