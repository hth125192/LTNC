#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a>0 && b>0 && c>0 && a+b>c && b+c>a && a+c>b)
    {
        double p=(a+b+c)/2;
        cout << sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else cout << "Error!";
    return 0;
}
