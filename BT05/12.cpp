#include <iostream>
using namespace std;
int check (int k, int n)
{
    if (0<=k && k<=n && 1<=n && n<=20) return 1;
    return 0;
}
int C(int k, int n)
{
    if (!check(k,n)) return 0;
    long long t=1, m=1;
    for (int i=1; i<=k; i++)
    {
        t*=(n+1-i);
        m*=i;
    }
    return t/m;
}
void nhap(int k[], int n[], int *a)
{
    int i=0;
    do
    {
        cin >> k[i] >> n[i];
        i++;
    }
    while (!(k[i-1]==-1 && n[i-1]==-1));
    *a=i;
}
int main()
{
    int k[100], n[100], *a;
    nhap(k,n,a);
    for (int i=0; i<*a-1; i++) cout << C(k[i],n[i]) << endl;
    return 0;
}
