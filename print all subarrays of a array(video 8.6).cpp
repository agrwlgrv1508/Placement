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
    int sum =0;
    int max_sum=0;
    for(int i=0;i<n;i++)
    {
    	sum=0;
        for(int j=i;j<n;j++)
        {
        	sum+=arr[j];
            if(sum>  max_sum)
            {
                max_sum=sum;
            }
        }
    }
    cout<<max_sum;
return 0;
}
