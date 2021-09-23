#include <iostream>
using namespace std;
int main()
{
	int d, m, y;
	cin >> d >> m >> y;
	if (m<3)
    {
		m+=12;
		y--;
	}
	int check=(d+2*m+3*(m+1)/5+5*y/4)%7;
	switch (check)
	{
		case 0:
            cout << "Chu nhat";
            break;
		case 1:
            cout << "Thu hai";
            break;
		case 2:
            cout << "Thu ba";
            break;
		case 3:
            cout << "Thu tu";
            break;
		case 4:
            cout << "Thu nam";
            break;
		case 5:
            cout << "Thu sau";
            break;
		case 6:
            cout << "Thu bay";
            break;
	}
	return 0;
}
