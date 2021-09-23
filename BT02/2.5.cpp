#include <iostream>
using namespace std;
int ucln (int a, int b)
{
    if (!b) return a;
    return ucln(b,a%b);
}
int main()
{
	int x, y;
    cin >> x >> y;
    cout << ucln(x,y);
	return 0;
}
