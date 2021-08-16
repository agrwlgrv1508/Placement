#include<iostream>
using namespace std;

int fibanacci(int n)
{
if(n==0)
{
    return 0;
}
if(n==1)
{
    return 1;
}
else
{
    return fibanacci(n-2)+fibanacci(n-1);
    
}
}
int main()
{
    int n;
    cin>>n;
    cout<<fibanacci(n);
return 0;
}
