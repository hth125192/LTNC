#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
    cin >> a >> b >> c;
    double d=b*b-4*a*c;
    if (!d) cout << -b/2/a;
    else if (d>0) cout << (-b-sqrt(d))/2/a << endl << (-b+sqrt(d))/2/a;
        else cout << -b/2/a << '-' << sqrt(-d)/2/a << 'i' << endl << -b/2/a << '+' << sqrt(-d)/2/a << 'i';
    return 0;
}
