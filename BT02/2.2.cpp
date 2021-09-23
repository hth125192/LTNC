#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	int y;
    cin >> x >> y;
    if (x)
        if (y)
        {
            double s=x;
            for (int i=1; i<abs(y); i++) s*=x;
            if (y>0) cout << s; else cout << 1/s;
        }
        else cout << 1;
    else
        if (y<0) cout << "inf";
        else if (y>0) cout << 0;
            else cout << 1;
    cout << endl << pow(x,y);
	return 0;
}
