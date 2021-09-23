#include <iostream>
using namespace std;
int main()
{
    int t, n, s, a[100001];
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;
        a[0]=0;
        for (int j=1; j<=n; j++)
        {
            cin >> s;
            a[j]=a[j-1]+s;
        }
        bool check=true;
        for (int j=0; j<n; j++)
        {
            if (a[n]-a[j+1]==a[j])
            {
                cout << "YES" << endl;
                check=false;
                break;
            }
            else if (a[n]-a[j+1]<a[j])
            {
                cout << "NO" << endl;
                check=false;
                break;
            }
        }
        if (check) cout << "NO" << endl;
    }
    return 0;
}
