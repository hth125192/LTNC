#include <iostream>
using namespace std;
int count_even(int* a, int n)
{
    int d1=0, d2=0;
    for (int i=0; i<5; i++)
        if (!a[i]%2) d1++;
    for (int i=n-1; i>n-6; i--)
        if (!a[i]%2) d2++;
    cout << d1 << ' ' << d2;
}
int main()
{
    int a[10]={0};
    count_even(a,10);
}


