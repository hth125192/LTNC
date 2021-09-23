#include <iostream>
using namespace std;
int main()
{
    int n, x[10001], y[10001];
    cin >> n;
    for (int i=1; i<=n; i++) cin >> x[i] >> y[i];
    for (int i=1; i<n; i++)
        for (int j=i+1; j<=n; j++)
            if (x[i]==x[j] || y[i]==y[j] || x[i]+y[i]==x[j]+y[j] || x[i]-y[i]==x[j]-y[j])
            {
                cout << "Yes";
                return 0;
            }
    cout << "No";
    return 0;
}
