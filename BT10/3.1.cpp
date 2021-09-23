#include <iostream>
#include <cstring>
using namespace std;
struct String
{
    int n;
    char* str;
    String(const char* s)
    {
        n=strlen(s);
        str=new char[n];
        strncpy(str,s,n);
    }
    ~String()
    {
        delete [] str;
    }
    void print()
    {
        cout << str << endl;
    }
    void append(const char* s)
    {
        char* ss=new char [n+strlen(s)+1];
        strncpy(ss,str,n);
        for (int i=0; i<strlen(s); i++) ss[i+n]=s[i];
        ss[n+strlen(s)]='\0';
        delete [] str;
        str=ss;
    }
};
int main()
{
    String s("Hello");
    s.print();
    String greeting("Hi");
	greeting.append(" there");
	greeting.print();
    return 0;
}
