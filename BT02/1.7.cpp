#include <iostream>
using namespace std;
int main()
{
	int n, pre;
    cin >> n;
    cout << n << ' ';
    while (n>=0)
    {
        pre=n;
        cin >> n;
        if (n-pre) cout << n << ' ';
    }
	return 0;
}
