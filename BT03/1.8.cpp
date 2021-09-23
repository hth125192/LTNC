#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    long long s=0;
    for (int i=0; i<n; i++) s=s+a[i]*(n-i-1);
    cout << s;
    delete []a;
    return 0;
}
