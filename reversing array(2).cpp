#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=d;i<n;i++)
    {
        int counter=0;
        for(int j=i;j>0;j--)
        {
            if(counter<d){
                int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            counter+=1;
        }}
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}