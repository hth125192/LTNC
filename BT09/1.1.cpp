#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* s1, const char* s2)
{
    char* s = new char[strlen(s1)+strlen(s2)+1];
    strcpy(s,s1);
    strcat(s,s2);
    return s;
}
int main()
{
    char* s1="Hello", *s2="World";
    cout << concat(s1,s2);
    return 0;
}
