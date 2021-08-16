#include<iostream>
using namespace std;

int main()
{
    int n;
	int sumarr[n];
    
    cout<<"enter the no. of elements"<<endl;
    cin>>n;
    int nums[n];
    cout<<"enter the value of array"<<endl;
    for(int i=0;i<n;i++)
    {
    	cin>>nums[i];
	}
    int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+nums[i];
   sumarr[i]=sum; 
}
cout<<"the running sum array is:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<sumarr[i]<<" ";
}
    return 0;
}
