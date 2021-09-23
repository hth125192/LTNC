#include <iostream>
using namespace std;
int n, s=0;
int chon[20];
void print(int x)
{
	for (int i=1; i<=x; i++) cout << chon[i] << ' ';
	cout << endl;
}
void xet(int n, int x)
{
	if (s<=n)
		for (int i=chon[x-1]; i<=n; i++)
		{
			chon[x]=i;
			s+=i;
			if (s==n) print(x);
			else xet(n,x+1);
			s-=i;
		}
}
int main()
{
	chon[0] = 1;
	cin >> n;
	xet(n,1);
	return 0;
}
