#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int n1=1;
    int n2=1;
    if(n<1)
    {
        return;
    }
    cout<<n1<<" ";
    for(int i=1;i<n;i++)
    {
        if(i==1)
        {
            cout<<n2<<" ";
        }
        else{
            int res=n1+n2;
            cout<<res<<" ";
            n1=n2;
            n2=res;
        }
    }


}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
