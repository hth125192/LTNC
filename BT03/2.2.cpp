#include <iostream>
using namespace std;
int main()
{
    int n, so;
    cin >> n >> so;
    int max=so, min=so, s=0, d=0;
    if (so%2) d++; else s+=so;
    for (int i=1; i<n; i++)
    {
        cin >> so;
        if (so>max) max=so;
        if (so<min) min=so;
        if (so%2) d++; else s+=so;
    }
    cout << min << endl << max << endl << s << endl << d;
    return 0;
}
