#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s, sum=0;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        sum+=s;
    }
    cout << sum;
    return 0;
}
