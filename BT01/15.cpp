#include <iostream>
using namespace std;
string sfibo(int n)
{
    if (!n) return "a";
    if (n==1) return "b";
    return sfibo(n-1)+sfibo(n-2);
}
int main()
{
    for (int i=0; i<11; i++) cout << sfibo(i) << endl;
    return 0;
}
