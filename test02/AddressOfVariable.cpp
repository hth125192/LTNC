#include <iostream>
using namespace std;
int main()
{
    int n, m;
    bool check;
    int a[3];
    char b[3];
    char s;
    cout << &n << endl << &m << endl << &check << endl;
    for (int i=0; i<3; i++) cout << &a[i] << endl;
    for (int i=0; i<3; i++) cout << (void*)&b[i] << endl;
    cout << (void*)&s;
    return 0;
}
//địa chỉ của các phần tử liên tiếp trong mảng a hơn kém nhau 4 byte = kích thước của kiểu int;
//tương tự, với mảng b là 1 byte = kích thước của kiểu char;
//khi thêm một số biến vào trước, sau 2 mảng a, b thì các biến có địa chỉ giảm dần theo thứ tự khai báo
