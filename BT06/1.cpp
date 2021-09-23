#include <iostream>
#include <cmath>
using namespace std;
int n, a[10001];
bool check (int x, int y)
{
    for (int i=1; i<x ;i++)
        if (a[i]==y || abs(i-x)==abs(a[i]-y)) return false;
    return true;
}
void print()
{
    for (int i=1; i<=n; i++) cout << a[i] << ' ';
    cout << endl;
}

void xep (int i)
{
    for (int j=1; j<=n; j++)
        if (check(i,j))
        {
            a[i]=j;
            if (i==n) print();
            xep(i+1);
        }
}

int main()
{
    cin >> n;
    xep(1);
    return 0;
}
