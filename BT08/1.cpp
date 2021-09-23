#include <iostream>
using namespace std;
int strlen(char a[])
{
    int d=0;
    for (char* cp=a; (*cp)!='\0'; cp++) d++;
    return d;
}
string reverse(char a[])
{
    string s="";
    for (int i=0; i<strlen(a); i++) s+=*(a+strlen(a)-i-1);
    return s;
}
void pad_right(char a[], int n)
{
    int l=strlen(a);
    while (l<n) a[l++] = ' ';
    a[l] = '\0';
}
int main()
{
    return(0);
}
