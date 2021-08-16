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
    for(int i=0;i<n-1;i++)
    {
        int current=i+1;
        for(int j=i;j>=0;j--)
              {
                  if(arr[current]<arr[j])
                  {
                      int temp=arr[j];
                      arr[j]=arr[current];
                      arr[current]=temp;
                      current=current-1;
                  }
              }
    }
cout<<"sorted array is:"<<" ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}