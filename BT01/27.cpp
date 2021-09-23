#include <iostream>
using namespace std;
int main()
{
	int n;
	while (true)
    {
        cin >> n;
        if (n==-1)
        {
            cout << "Bye" << endl;
            break;
        }
        cout << ((n>=0 && n%5==0) ? n/5 : -1) << endl;
    }
	return 0;
}
