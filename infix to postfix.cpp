#include <iostream>
#include<stack>
#include<string>
using namespace std;

int precedence(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='*' || ch=='/')
    {
        return 2;
    }
    else if(ch=='+' || ch=='-')
    {
           return 1;
    }
    else
    {
    	return -1;
	}
    
}
string InfixToPostfix(string s)
{
    stack <char> st;
    string res;
    for(int i=0;i<s.length();i++)
    {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
               res+=s[i];
            }  
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                while(!st.empty() && st.top()!='(')
                {
                         res+=st.top();
                        st.pop();
                }
                if(!st.empty())
                st.pop();
            }
            else         //operator
            {
                    while(!st.empty() && (precedence(s[i])<precedence(st.top())))
                      {
                          res+=st.top();
                           st.pop();
                      }
                      st.push(s[i]);
                  
            }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s="(a-b/c)*(a/k-l)";
    cout<<InfixToPostfix(s);
    return 0;
}
