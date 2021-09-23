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
    if (!y) cout << "Division by zero!";
    else if (x==0 || y==1) cout << x;
        else cout << x/ucln(x,y) << '/' << y/ucln(x,y);
	return 0;
}
