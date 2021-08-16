#include<iostream>
using namespace std;

int power(int n,int result,int p)
{
    if(p>0)
    {
         result=n*result;
         return power(n,result,p-1);
    }
    else 
    return result;
 
}

int main()
{
    int n,p;
    cin>>n>>p;
    int result=1;
 cout<<power(n,result,p);
 return 0;
}
