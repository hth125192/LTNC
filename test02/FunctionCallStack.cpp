#include <iostream>
using namespace std;
int factorial(int x)
{
    cout << "x=" << x << " at " << &x << endl;
	if (!x) return 1;
	return x*factorial(x-1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
// chuỗi giá trị đưa ra màn hình gồm x (n->0) và &x (giảm dần)
// một stack frame cho hàm factorial là 30
