#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i=0; i<n; i++) a[i] = new int [n];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) a[i][j]=0;
    int so=2, h=0, c=n/2;
    a[h][c]=1;
    while (so<=n*n)
    {
        h--;
        c++;
        if (h==-1) h=n-1;
        if (c==n) c=0;
        if (a[h][c])
        {
            c--;
            h=h+2;
            if (c==-1) c=n-1;
            if (h==n) h=0;
            else if (h==n+1) h=1;
        }
        a[h][c]=so++;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
    for (int i=0; i<n; i++) delete a[i];
    delete []a;
    return 0;
}
