#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 insertionsort(arr,n);
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;
}
