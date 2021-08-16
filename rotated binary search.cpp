#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int s,int l)
{
    
    int mid=(s+l)/2;
    while(s<=l)
    {
        if(key==arr[mid])
        {
            return mid;
        }
    if(key>arr[mid] && key>arr[l])
    {
       return binarysearch(arr,key,mid+1,l);
    }
    else if (key<arr[mid] && key>=arr[l]) {
         return binarysearch(arr,key,s,mid-1);
    }
    }
     
    return -1;}
int main()
{
int arr[7]={4,5,6,7,8,9,2};
int key=8;
int s=0;
    int l=6;
cout<<binarysearch(arr,key,s,l);
return 0;
}
