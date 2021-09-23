#include <iostream>
using namespace std;
int main()
{
    double d, h, sd=0, sh=0;
    int n, i=1;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> n;
    while (i<=n)
    {
        cout << "Diem mon hoc " << i << ": ";
        cin >> d;
        while (d<0 || d>10)
        {
            cout << "Nhap lai diem mon hoc " << i << " (trong khoang tu 0..10): ";
            cin >> d;
        }
        cout << "He so mon hoc " << i << ": ";
        cin >> h;
        while (!(h==1 || h==1.5 || h==2 || h==2.5 || h==3))
        {
            cout << "Nhap lai he so mon hoc " << i << " (1, 1.5, 2, 2.5 hoac 3): ";
            cin >> h;
        }
        sd=sd+d*h;
        sh+=h;
        i++;
    }
    cout << "So mon hoc: " << n << endl;
    cout << "Tong so he so: " << sh << endl;
    cout << "Diem trung binh cua " << n << " mon hoc: " << sd/sh;
    return 0;
}
