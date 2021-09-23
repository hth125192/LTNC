#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i=0; i<n; i++) a[i] = new int [n];
    for (int i=0; i<n; i++)
    {
        a[i][0]=1;
        a[i][i]=1;
    }
    for (int i=2; i<n; i++)
        for (int j=1; j<i; j++) a[i][j]=a[i-1][j]+a[i-1][j-1];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++) cout << a[i][j] <<     '\t';
        cout << endl << endl;
    }
    for (int i=0; i<n; i++) delete a[i];
    delete []a;
    return 0;
}
