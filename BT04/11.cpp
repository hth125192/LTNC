#include <iostream>
#include <cstring>
using namespace std;
bool check (string s1, string s2)
{
    for (int i=0; i<s1.length(); i++)
        if (s1[i]!=s2[s2.length()-1-i]) return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    string a[100];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (check(a[i],a[j]))
            {
                cout << a[i].length() << ' ' << a[i][a[i].length()/2];
                return 0;
            }
    return 0;
}
