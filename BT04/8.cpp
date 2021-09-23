#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    double a[10000], b[10000], amax, amin, bmax, bmin;
    cin >> n >> a[0] >> b[0];
    amax=a[0]; amin=a[0]; bmax=b[0]; bmin=b[0];
    bool check=(a[0]>b[0]);
    for (int i=1; i<n; i++)
    {
        cin >> a[i] >> b[i];
        if (check)
            if (a[i]<=b[i]) check=false;
        if (a[i]>amax) amax=a[i];
        if (a[i]<amin) amin=a[i];
        if (b[i]>bmax) bmax=b[i];
        if (b[i]<bmin) bmin=b[i];
    }
    if (check)
    {
        cout << "Yes";
        return 0;
    }
    if (bmax>=amax || amin<=bmin)
    {
        cout << "No";
        return 0;
    }
    sort(a,a+n);
    sort(b,b+n);
    for (int i=0; i<n; i++)
        if (a[i]<=b[i])
        {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}
