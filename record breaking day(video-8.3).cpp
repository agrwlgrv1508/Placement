#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count =0;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]>arr[i+1])
            {
                count+=1;
                max=arr[i];
            }
        }
        if(0<i<n-1)
        {
            if(arr[i]>max && arr[i]>arr[i+1])
            {
                max=arr[i];
                count+=1;
            }
        }
        if(i==n-1)
        {
            if(arr[i]>max)
            {
                count+=1;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}