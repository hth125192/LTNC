#include <iostream>
using namespace std;
bool check (int n)
{
    bool *a = new bool [n+1];
    int s;
    for (int i=1; i<=n; i++) a[i]=false;
    for (int i=1; i<=n; i++)
    {
        cin >> s;
        if (a[s]) return true; else a[s]=true;
    }
    return false;
    delete []a;
}
int main()
{
    int n;
    cin >> n;
    cout << ((check(n)) ? "Yes" : "No");
    return 0;
}
