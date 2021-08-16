#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    //int k;
    //cin>>k;
    int arr1[n];
    for(int i=1;i<=n;i++)
    {
        arr1[i-1]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
