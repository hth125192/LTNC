#include <iostream>
using namespace std;
int n, k, a[100];
void print()
{
    for (int i=1; i<=k; i++) cout << (char)(a[i]+96) << ' ';
    cout << endl;
}

void xep (int i)
{
    for (int j=a[i-1]+1; j<=n-k+i; j++)
        {
            a[i]=j;
            if (i==k) print();
            else xep(i+1);
        }
}

int main()
{
    cin >> n >> k;
    a[0]=0;
    xep(1);
    return 0;
}
