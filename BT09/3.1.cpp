#include <iostream>
using namespace std;
int strlen(const char* a)
{
    int d=0;
    for (const char* cp=a; (*cp)!='\0'; cp++) d++;
    return d;
}
char* reverse(const char* a)
{
    char* pa = new char [strlen(a)];
    for (int i=0; i<strlen(a); i++) *(pa+i)=*(a+strlen(a)-i-1);
    return pa;
}
char* pad_right(const char* a, int n)
{
    int l=strlen(a);
    char* ptr = new char [n];
    for (int i=0; i<l; i++) *(ptr+i)=*(a+i);
    while (l<n) ptr[l++] = ' ';
    ptr[l] = '\0';
    return ptr;
}
int main()
{
    return(0);
}
