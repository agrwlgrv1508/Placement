#include<iostream>
using namespace std;
int max(int arr[],int n)
{
    int maxno=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxno)
        {
            maxno=arr[i];
        }
    }
    return maxno;
}
void countsort(int arr[],int n)
{
  int size=max(arr,n);
  int countarr[size+1]={0};
  for(int i=0;i<n;i++)
  {
      countarr[arr[i]]++;
  }
  for(int i=1;i<=size;i++)
  {
    countarr[i]=countarr[i]+countarr[i-1];  
  }
  int output[n];
  for(int i=n-1;i>=0;i--)
  {
     output[--countarr[arr[i]]]=arr[i];
  }
  for(int i=0;i<n;i++)
  {
      arr[i]=output[i];
  }

}
int main()
{
    int arr[]={1,3,2,3,4,1,6,4,3};
    countsort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
