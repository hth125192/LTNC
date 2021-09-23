#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for (int i=0; i<=15; i++) cout << 20*i << "\t" << fixed << setprecision(2) << (20*i-32)*5/9.0 << "\t" << fixed << setprecision(2) << (20*i-32)*5/9.0+273.15 << "\n";
    return 0;
}
