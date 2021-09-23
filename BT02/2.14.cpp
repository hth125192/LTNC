#include <iostream>
using namespace std;
int main()
{
    int n;
    double s;
    cin >> n >> s;
    double min=s, max=s;
    for (int i=1; i<n; i++)
    {
        cin >> s;
        if (s>max) max=s;
        if (s<min) min=s;
    }
    cout << max << ' ' << min;
    return 0;
}
