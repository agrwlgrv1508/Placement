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
    
   int max=arr[0];
   cout<<max<<" ";
    for(int i=1;i<n;i++)
    {
     if(arr[i]>max)
     {
         max=arr[i];
         cout<<max<<" ";
     }   
     else
     {
	 cout<<max<<" ";
    }}
return 0;
}
