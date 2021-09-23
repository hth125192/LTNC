#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int N=pow(2,n);
    char H[N][N];
    H[0][0]= '.';
    for (int step=1; step<N; step+=step)
        for (int i=0; i<step; i++)
            for (int j=0; j<step; j++)
            {
                H[i+step][j]=H[i][j];
                H[i][j+step]=H[i][j];
                if (H[i][j]=='.') H[i+step][j+step]='o';
                else H[i+step][j+step]='.';
            }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++) cout<< H[i][j] << " ";
        cout << endl;
    }
    return 0;
}
