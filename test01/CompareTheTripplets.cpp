#include <iostream>
using namespace std;
int main()
{
    int a1, b1, c1, a2, b2, c2, d1=0, d2=0;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1>a2) d1++; else if (a1<a2) d2++;
    if (b1>b2) d1++; else if (b1<b2) d2++;
    if (c1>c2) d1++; else if (c1<c2) d2++;
    cout << d1 << ' ' << d2;
    return 0;
}
