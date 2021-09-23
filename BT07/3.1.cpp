#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int roll()
{
    return rand()%6+1;
}
void play1()
{
    int n1=0, n2=0;
    do
    {
        int p=roll();
        n1+=p;
        cout << "1: " << p << ' ';
        if (n1>=100)
        {
            cout << "1 win!";
            exit(1);
        }
        cout << n1 << endl;
        p=roll();
        n2+=p;
        cout << "2: " << p << ' ';
        if (n2>=100)
        {
            cout << "2 win!";
            exit(2);
        }
        cout << n2 << endl;
    }
    while (n1<100 && n2<100);
}
void play2()
{
    int n1=0, n2=0;
    do
    {
        int p;
        while (n2>=n1)
        {
            p=roll();
            n1+=p;
            cout << "1: " << p << ' ';
            if (n1>=100)
            {
                cout << "1 win!";
                exit(1);
            }
            cout << n1 << endl;
        }
        while (n1>=n2)
        {
            p=roll();
            n2+=p;
            cout << "2: " << p << ' ';
            if (n2>=100)
            {
                cout << "2 win!";
                exit(2);
            }
            cout << n2 << endl;
        }
    }
    while (n1<100 && n2<100);
}
int main()
{
    srand(time(0));
    play1();
    play2();
    return 0;
}
