#include<iostream>
using namespace std;

int factorial(int n,int result)
{
    if(n>=1)
    {
         result=result*n;
         return factorial(n-1,result);
    }
    else
    return result;
    }
int main()
{
    int n;
    cin>>n;
    int result=1;
cout<<factorial(n,result);
return 0;
}
