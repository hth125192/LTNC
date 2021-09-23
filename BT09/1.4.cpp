#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    {
        int a=0;
        int *pa = new int;
        pa=&a;
        ptr=pa;
        delete pa;
    }
    cout << ptr; //ptr duoc gan bang pa duoc cap phat dong trong vung nho dia phuong (!?)
    return 0;
}
