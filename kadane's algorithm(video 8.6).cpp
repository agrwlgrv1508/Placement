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
int curr_sum=0;
int max=0;
for(int i=0;i<n;i++)
{
    curr_sum+=arr[i];
    if (curr_sum<0)
    {
        curr_sum=0;
    }
    if (curr_sum>max)
    {
        max=curr_sum;
    }
    

}
cout<<max;
return 0;
}
