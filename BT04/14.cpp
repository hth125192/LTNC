#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, a[100], b[101];
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<=n; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n+1);
    for (int i=0; i<n; i++)
        if (a[i]-b[i])
        {
            cout << b[i];
            return 0;
        }
    cout << b[n];
    return 0;
}
