#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int min, max, step;
    cin >> min >> max >> step;
    for (int i=0; i<=(max-min)/step; i++) cout << min+step*i << "\t" << fixed << setprecision(2) << (min+step*i-32)*5/9.0 << "\t" << fixed << setprecision(2) << (min+step*i-32)*5/9.0+273.15 << "\n";
    if ((max-min)%step) cout << max << "\t" << fixed << setprecision(2) << (max-32)*5/9.0 << "\t" << fixed << setprecision(2) << (max-32)*5/9.0+273.15 << "\n";
    return 0;
}
