#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n;
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int i=0; i<n; i++)
    {
        cin >> s;
        a[s]++;
    }
    for (int i=0; i<10; i++) cout << a[i] << ' ';
    return 0;
}
