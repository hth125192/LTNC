#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i=0; i<s.length(); i++)
        for (int j=0; j<s.length(); j++)
        {
            cout << s[i] << s[j] << ' ';
            for (int k=0; k<s.length(); k++) cout << s[i] << s[j] << s[k] << ' ';
            cout << endl;
        }
    return 0;
}
