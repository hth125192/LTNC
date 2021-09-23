#include <iostream>
#include <cmath>
using namespace std;
bool scp (int n)
{
    int s=sqrt(n);
    return (s*s==n && n>0);
}
int main()
{
    int n;
    cin >> n;
    cout << ((scp(n)) ? "true" : "false");
    return 0;
}
