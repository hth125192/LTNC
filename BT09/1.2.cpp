#include <iostream>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; //xoa mat vung bo nho ma p2 dang tro toi
    *p2 = 100;
    cout << *p2;
    delete p2; //p2 khong duoc cap phat dong
    return 0;
}
