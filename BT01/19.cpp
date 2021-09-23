#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool b=(((x>y && y>z) || (x<y && y<z)) ? true : false);
    cout << b;
    return 0;
}
