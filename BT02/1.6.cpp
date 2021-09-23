#include <iostream>
using namespace std;
int main()
{
	int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            if ((i+j+1)%n) cout << (i+j+1)%n << ' '; else cout << n << ' ';
        cout << endl;
    }
	return 0;
}
