#include <iostream>
using namespace std;
int main()
{
    double n, s=0;
    for (int i=0; i<5; i++)
    {
        cin >> n;
        s+=n;
    }
    cout << s/5;
    return 0;
}
