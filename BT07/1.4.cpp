#include <iostream>
using namespace std;
int search(int key, int* a, int low, int high)
{
    if (low>high) return -1;
    int mid=(low+high)/2;
    if (*(a+mid)==key) return mid;
    if (*(a+mid)>key) return search(key,a,low,mid-1);
    return search(key,a,mid+1,high);
}
int main()
{
    int s;
    cin >> s;
    int a[10]={0};
    cout << search(s,a,0,9);
    return 0;
}


