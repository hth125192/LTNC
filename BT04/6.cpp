#include <iostream>
#include <algorithm>
using namespace std;
int search (int key, int a[], int low, int high)
{
    if (low>high) return -1;
    int mid=(low+high)/2;
    if (a[mid]==key) return mid;
    if (a[mid]>key) return search(key,a,low,mid-1);
    return search(key,a,mid+1,high);
}
int main()
{
    int n;
    cin >> n;
    int a[10000];
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for (int i=0; i<n-2; i++)
    {
        if (a[i]+a[i+1]+a[i+2]>0)
        {
            cout << "Not found!";
            return 0;
        }
        for (int j=i+1; j<n-1; j++)
            if (search(-a[i]-a[j],a,j+1,n-1)!=-1)
            {
                cout << a[i] << ' ' << a[j] << ' ' << -a[i]-a[j];
                return 0;
            }
    }
    cout << "Not found!";
    return 0;
}
