#include <iostream>
using namespace std;
bool move(char a[100][100], int n, int m)
{
    bool check=true;
    for (int i=1; i<n; i++)
        for (int j=0; j<m; j++)
            if (a[i][j]!='E')
            {
                check=false;
                break;
            }
    if (check) return true;
    int y=0;
    for (int i=0; i<m; i++)
        if (a[0][i]=='Y')
        {
            y=i;
            break;
        }
    bool stay_result=true;
    if (a[1][y]=='R') stay_result=false;
    else
    {
        char stay[100][100];
        for (int i=1; i<n; i++)
            for(int j=0; j<=m; j++) stay[i-1][j]=a[i][j];
        for (int j=0; j<m; j++) stay[n-1][j]='E';
        stay[n-1][m]='\0';
        stay[0][y]='Y';
        stay_result=move(stay,n,m);
    }
    bool left_result=true;
    if (y>0&&a[0][y-1]=='E'&&a[1][y-1]=='E')
    {
        char left[100][100];
        for (int i=1; i<n; i++)
            for (int j=0; j<=m; j++) left[i-1][j]=a[i][j];
        for (int j=0; j<m; j++) left[n-1][j]='E';
        left[n-1][m]='\0';
        left[0][y-1]='Y';
        left_result=move(left,n,m);
    }
    else left_result=false;
    bool right_result=true;
    if (y<m-1&&a[0][y+1]=='E'&&a[1][y+1]=='E')
    {
        char right[100][100];
        for (int i=1; i<n; i++)
            for (int j=0; j<=m; j++) right[i-1][j]=a[i][j];
        for (int j=0; j<m; j++) right[n-1][j]='E';
        right[n-1][m]='\0';
        right[0][y+1]='Y';
        right_result=move(right,n,m);
    }
    else right_result = false;
    if (stay_result==true||left_result==true||right_result==true) return true;
    return false;
}

int main()
{
    char map[100][100];
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> map[i];
    if (move(map,n,m)) cout << "YES";
    else cout << "NO";
    return 0;
}
