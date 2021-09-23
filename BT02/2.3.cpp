#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
    cin >> a >> b >> c;
    if (a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b)
    {
        cout << a+b+c << endl;
        if (a==b && b==c) cout << "deu ";
        else
        {
            if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) cout << "vuong ";
            if ((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b)) cout << "can ";
        }
    }
    else cout << "error!";
	return 0;
}
