#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void subsequence(string s,string ans)
{
    if(s.length()==0)
    {
    	
    		string temp=ans;
    		if(temp.length()==3)
    		{
    			int res= stoi(temp[0]) % stoi(temp[1]);
    			if(res==0)
    			{
    				cout<<temp<<endl;
				}
			}
    		
            return ;
		
       
    }
    char ch=s[0];
    string ros=s.substr(1);
    subsequence(ros,ans);
    subsequence(ros,ans+ch);
    
}
int main()
{
    string s="123";
    subsequence(s," ");
    return 0;
}
