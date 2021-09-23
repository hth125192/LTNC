#include <iostream>
using namespace std;
int main()
{
    int n, s, sum=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        sum+=s;
    }
    cout << sum;
    return 0;
}
