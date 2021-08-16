#include<iostream>
#include<string>
using namespace std;
string mpte(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=mpte(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;
}
int main()
{
cout<<mpte("axxbdxcefxhix");
return 0;
}
