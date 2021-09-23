#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for (int j=-n+1; j<n; j++)
            if (i+abs(j)<n) cout << '*';
            else cout << ' ';
        cout << endl;
    }
	return 0;
}
