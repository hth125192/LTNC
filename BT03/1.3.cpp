#include <iostream>
#include <cstring>
using namespace std;
bool dx (string s)
{
    for (int i=0; i<(s.length()+1)/2; i++)
        if (s[i]!=s[s.length()-1-i]) return false;
    return true;
}
int main()
{
    int n, a, b;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a >> b;
        int d=0;
        for (int j=a; j<=b; j++)
            if (dx(to_string(j))) d++;
        cout << d << endl;
    }
    return 0;
}
