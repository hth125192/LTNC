#include <iostream>
using namespace std;
struct check
{
    int *ptr = new int [10];
};
int main()
{
    check a;
    int *p = new int [10];
    cout << a.ptr << endl;
    p=a.ptr;
    cout << p;
    return 0;
}
