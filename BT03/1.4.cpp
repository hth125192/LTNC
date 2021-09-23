#include <iostream>
using namespace std;
int check (char **a, int n, int m)
{
    int d=0;
    for (int i=n-1; i<=n+1; i++)
        for (int j=m-1; j<=m+1; j++)
            if (a[i][j]=='*' && !(i==n && j==m)) d++;
    return d;
}
int main()
{
    int n, m;
    cin >> n >> m;
    char **a = new char *[n+2];
    for (int i=0; i<n+2; i++) a[i] = new char [m+2];
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++) cin >> a[i][j];
    for (int j=0; j<m+2; j++) a[0][j]='.';
    for (int j=0; j<m+2; j++) a[n+1][j]='.';
    for (int i=1; i<=n; i++) a[i][0]='.';
    for (int i=1; i<=n; i++) a[i][m+1]='.';
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
            if (a[i][j]=='*') cout << '*' << ' '; else cout << check(a,i,j) << ' ';
        cout << endl;
    }
    for (int i=0; i<n+2; i++) delete a[i];
    delete []a;
    return 0;
}
