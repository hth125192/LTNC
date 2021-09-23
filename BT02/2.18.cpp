#include <iostream>
using namespace std;
int main()
{
    double d,s=0;
    int n=1;
    cout << "Diem mon hoc 1: ";
    cin >> d;
    while (d>=0)
    {
        while (d>10)
        {
            cout << "Nhap lai diem mon hoc " << n << " (trong khoang tu 0..10): ";
            cin >> d;
        }
        if (d<0) break;
        s+=d;
        n++;
        cout << "Diem mon hoc " << n << ": ";
        cin >> d;
    }
    if (n==1) cout << "Division by zero";
    else cout << "Diem trung binh cua " << n-1 << " mon hoc: " << s/(n-1);
    return 0;
}
