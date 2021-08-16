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
    int st=0;
    int e=0;
    int i=0;
    int sum;
    cout<<"enter the sum value"<<endl;
    cin>>sum;
    int curr_sum=0;
    
for(int j=i;j<n;j++)
{ 
    
    if(curr_sum<sum)
    {
       curr_sum=curr_sum+arr[j];
       
       
    }
    if(curr_sum==sum)
    {
    	j-=1;
        st=i+1;
        e=j+1;
        break;
    }
     if(curr_sum>sum)
    { 
    
        i=i+1;
        curr_sum-=arr[j];
    
        
    }
   
}
cout<<st<<" "<<e;  
return 0;
}
