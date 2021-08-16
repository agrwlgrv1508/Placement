#include<iostream>
using namespace std;

void swap(int i,int j)
{
    int temp=j;
    j=i;
    i=temp;
}
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[i+1],arr[r]);
        return i+1;
    
}
void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
         int pivot=partition(arr,l,r);
    quicksort(arr,l,pivot-1);
    quicksort(arr,pivot+1,r);
}}
int main()
{
    int arr[]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
