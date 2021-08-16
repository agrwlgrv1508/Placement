#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    int count =1;
    int max=INT_MIN;
    char ans;
    for(int i=0;i<s1.size()-1;i++)
    {
         if(s1[i]==s1[i+1])
         {
              count++;
         }
         else
         { 
             if(count>=max)
             {
                 max=count;
                 ans=s1[i];
                 cout<<max<<" "<<ans<<endl;
             }
             
             count=1;

         }
         
    }
    
    return 0;
}
