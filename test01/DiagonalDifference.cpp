#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, s, a=0, b=0;
    cin >> n;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            cin >> s;
            if (i+j+1==n) a+=s;
            if (i==j) b+=s;
        }
    cout << abs(a-b);
    return 0;
}
