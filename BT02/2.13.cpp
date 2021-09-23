#include <iostream>
#include <cmath>
using namespace std;
bool snt (int n)
{
    if (n<2) return false;
    for (int i=2; i<=sqrt(n); i++)
        if (n%i==0) return false;
    return true;
}
bool shh(int n)
{
    int s=1;
    for (int i=2; i<=n/2; i++)
        if (n%i==0) s+=i;
    if (s==n) return true;
    return false;
}
bool scp (int n)
{
    int s=sqrt(n);
    return (s*s==n && n>0);
}
int main()
{
    int n;
    cin >> n;
    for (int i=2; i<=n; i++)
        if (snt(i)) cout << i << ' ';
    cout << endl;
    for (int i=2; i<=n; i++)
        if (shh(i)) cout << i << ' ';
    cout << endl;
    for (int i=2; i<=n; i++)
        if (scp(i)) cout << i << ' ';
    return 0;
}
