#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int r[10]={3,3,3,3,3,1,1,-6,-6,-6};
int t[10]={0,0,9,9,-12,1,1,1,-2-2};
int go()
{
    return rand()%10;
}
void play()
{
    int R=0, T=0;
    do
    {
        int p=r[go()];
        R+=p;
        if (R<0) R=0;
        cout << "R: " << p << ' ';
        if (R>=70)
        {
            cout << "R win!";
            exit(1);
        }
        cout << R << endl;
        p=t[go()];
        T+=p;
        if (T<0) T=0;
        cout << "T: " << p << ' ';
        if (T>=70)
        {
            cout << "T win!";
            exit(2);
        }
        cout << T << endl;
    }
    while (R<70 && T<70);
}
int main()
{
    srand(time(0));
    play();
    return 0;
}
