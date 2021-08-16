#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    int d;
    cin>>d;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   for(int i=d;i<n;i++)
   {
   	temp[i-d]=arr[i];
   }
   for(int i=0;i<d;i++)
   {
   	temp[n-d+i]=arr[i];
   }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
    }
