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
    string s;
    getline(cin,s);
    cout << ((dx(s)) ? "Yes" : "No");
    return 0;
}
