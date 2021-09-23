#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *a = new int [n];
	cin >> a[0];
	int max=a[0], min=a[0], t=a[0];
	for (int i=1; i<n; i++)
    {
        cin >> a[i];
        t+=a[i];
        if (a[i]<min) min=a[i];
        if (a[i]>max) max=a[i];
    }
	cout << 1.0*t/n << endl << max << endl << min;
	delete []a;
	return 0;
}
