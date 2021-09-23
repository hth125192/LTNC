#include <iostream>
#include <cmath>
using namespace std;
int rnd1(double n)
{
    if (int(10*n)%10>=5) return ceil(n);
    return floor(n);
}
int rnd2(double n)
{
    if (int(10*n)%10>=5) return int(n)+1;
    return int (n);
}
int main()
{
    double n;
    cin >> n;
    cout << rnd1(n) << endl << rnd2(n);
    return 0;
}
