#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        int l=b-a+1;
        bool check=true;
        for (int i=1; i<=(n-b)/l; i++){
            for (int j=0; j<l; j++)
                if (s[a-1+j]!=s[a-1+i*l+j])
                {
                    cout << i << endl;
                    check=false;
                    break;
                }
            if (!check) break;}
        if (check) cout << (n-b)/l+1 << endl;
    }
    return 0;
}
