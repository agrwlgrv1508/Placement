#include<iostream>
#include<stack>


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
   
        return -1;
    
}
string InfixToPrefix(string s)
{

    stack <char> st;
 string res;
 
 for(int i=s.length()-1;i>=0;i--)
 {
   if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
 {
     res+=s[i];
 }
 else if(s[i]==')')
 {
     st.push(s[i]);
 }

 else if(s[i]=='(')
 {
     while((!s.empty()) && st.top()!=')')
     {
         res+=st.top();
         st.pop();
     }
     if(!st.empty())
     {
     	st.pop();
	 }
        
 }
    else  //operator
    {
       while((!st.empty())  &&  (precedence(st.top()))>(precedence(s[i])))
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
    string s="(A-B/C)*(A/K-L)";
    cout<<InfixToPrefix(s);
    return 0;
}
