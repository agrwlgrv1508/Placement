#include<iostream>
#include<string>
using namespace std;

string remove_duplicate(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=remove_duplicate(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}
int main()
{
    string s="aaaabbbbbcccdd";
    cout<<remove_duplicate(s);
}
