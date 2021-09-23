#include <iostream>
using namespace std;
int n;
int chon[100];
int check[100];
void print()
{
	for (int i=1; i<=n; i++) cout << chon[i] << ' ';
	cout << endl;
}
void xep(int k)
{
	for (int i=1; i<=n; i++)
		if (!check[i])
        {
			chon[k]=i;
			check[i]=1;
			if (k==n) print();
			else xep(k+1);
			check[i]=0;
        }
}
int main()
{
	cin >> n;
	for (int i=0; i<=n; i++) chon[i]=0;
	xep(1);
	return 0;
}
