#include <iostream>
using namespace std;
int ucln (int a, int b)
{
    if (!b) return a;
    return ucln(b,a%b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((ucln(a,b)==1) ? "NTCN" : "khong NTCN");
    return 0;
}
