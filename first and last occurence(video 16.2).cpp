#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstoccurence(arr,n,i+1,key);
}

int lastoccurence(int arr[],int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    int rest_array=lastoccurence(arr,n,i+1,key);
    if(rest_array!=-1)
    {
        return rest_array;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={4,5,9,4,5,6,3};
    int n=5;
    cout<<firstoccurence(arr,n,0,5)<<endl;
    cout<<lastoccurence(arr,n,0,5);
    return 0;
}
