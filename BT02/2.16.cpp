#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap vao mot so trong khoang 0..9: ";
    cin >> n;
    while (0<=n && n<=9)
    {
        cout << "Vua nhap chu so ";
        switch (n)
        {
        case 0:
            cout << "khong\n";
            break;
        case 1:
            cout << "mot\n";
            break;
        case 2:
            cout << "hai\n";
            break;
        case 3:
            cout << "ba\n";
            break;
        case 4:
            cout << "bon\n";
            break;
        case 5:
            cout << "nam\n";
            break;
        case 6:
            cout << "sau\n";
            break;
        case 7:
            cout << "bay\n";
            break;
        case 8:
            cout << "tam\n";
            break;
        case 9:
            cout << "chin\n";
            break;
        }
        cout << "Nhap vao mot so trong khoang 0..9: ";
        cin >> n;
    }
    return 0;
}
