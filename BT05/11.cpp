#include <iostream>
#include <cmath>
using namespace std;
string decbin(long long n)
{
    string s="";
    while (n>0)
    {
        if (n%2) s+="1"; else s+="0";
        n/=2;
    }
    return s;
}
long long bindec(string s)
{
    long long n=0;
    for (int i=s.length()-1; i>=0; i--) n=n+(s[i]-'0')*pow(2,s.length()-1-i);
    return n;
}
int main()
{
    long long n;
    cin >> n;
    string s=decbin(n);
    for (int i=s.length()-1; i>=0; i--) cout << s[i];
    cout << endl;
    cin >> s;
    cout << bindec(s);
    return 0;
}
