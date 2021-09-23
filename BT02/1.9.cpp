#include <iostream>
using namespace std;
int main()
{
	int n, a, b, x=1000000, y=100000;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a >> b;
        if (a<x) x=a;
        if (b<y) y=b;
    }
    cout << x*y;
	return 0;
}
