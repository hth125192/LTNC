#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10000];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (!(a[i]+a[j]))
            {
                cout << a[i] << ' ' << a[j];
                return 0;
            }
    cout << "Not found!";
    return 0;
}
