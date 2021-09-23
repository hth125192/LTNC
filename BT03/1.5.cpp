#include <iostream>
using namespace std;
int main()
{
    int x, y, a[10][10];
    cin >> x >> y;
    int d=0, so=1, h=x-1, c=y-1;
    while (true)
    {
        for (int j=d; j<=c; j++) a[d][j]=so++;
        if (so>x*y) break;
        for (int i=d+1; i<=h; i++) a[i][c]=so++;
        if (so>x*y) break;
        for (int j=c-1; j>=d; j--) a[h][j]=so++;
        if (so>x*y) break;
        for (int i=h-1; i>d; i--) a[i][d]=so++;
        if (so>x*y) break;
        d++;
        h--;
        c--;
    }
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
