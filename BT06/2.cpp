#include <iostream>
using namespace std;
int n, k, a[100], check[100]={0};
void print()
{
    for (int i=1; i<=k; i++) cout << (char)(a[i]+96) << ' ';
    cout << endl;
}

void xep (int i)
{
    for (int j=1; j<=n; j++)
        if (!check[j])
        {
            a[i]=j;
            check[j]=1;
            if (i==k) print();
            else xep(i+1);
            check[j]=0;
        }
}

int main()
{
    cin >> n >> k;
    xep(1);
    return 0;
}
