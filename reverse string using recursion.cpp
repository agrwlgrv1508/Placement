#include<iostream>
#include<string>
using namespace std;

void reverse(string s1)
{
    if(s1.length()==0)
    {
        return ;
    }
    string ros=s1.substr(1);
    reverse(ros);
    cout<<s1[0];
}
int main()
{
    string s1="harsh";
    reverse(s1);
    return 0;
}
