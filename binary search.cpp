#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
int mid;
    while(s<=e)
    { 
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
if(s>e)
{
	return s;
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
    int key=0;
    cout<<binarySearch(arr,n,key);
    return 0;
}
