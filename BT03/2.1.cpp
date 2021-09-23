#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double s=0, ss=0, tb;
    double *a = new double [n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    tb=s/n;
    for (int i=0; i<n; i++) ss=ss+(a[i]-tb)*(a[i]-tb);
    cout << tb << endl << ss/n;
    delete []a;
    return 0;
}
