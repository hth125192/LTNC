#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char a[5][208]={{' ',' ',' ','#','#',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#',' ',' ',' ','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#',' ',' ','#','#','#','#','#','#',' ',' ',' ','#','#','#','#',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' '},
                    {' ',' ','#',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' '},
                    {' ','#','#','#','#','#','#',' ',' ','#','#','#','#','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#','#','#','#','#',' ',' ',' ','#','#','#','#','#',' ',' ',' ','#',' ',' ',' ','#','#',' ',' ','#','#','#','#','#','#',' ',' ',' ',' ','#',' ',' ',' ',' '},
                    {' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' '},
                    {' ','#',' ',' ',' ',' ','#',' ',' ','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#',' ',' ',' ','#','#','#','#','#',' ',' ',' ','#','#','#','#','#','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' '}};
    for (int i=0; i<5; i++)
    {
        int k=0;
        while (s[k])
        {
            for (int j=0; j<8; j++) cout << a[i][(toupper(s[k])-65)*8+j];
            k++;
        }
        cout << endl;
    }
    return 0;
}
