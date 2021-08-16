#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        
       
        int min_idx= INT_MAX;
        int max=arr[1];
        for(int i=1;i<=n;i++)
           {
                   if(arr[i]>max)
                   {
                       max=arr[i];
                   }
           }
           
           int temp[max+1]={0};
                 for (int i=1;i<=n;i++)
                 {
                 	
                 	if(temp[i]!=0)
                 	{
                 		if(temp[i]<min_idx)
                 		{
                 			min_idx=temp[i];
						 }
					 }
					 else
					 {
					 
					 temp[arr[i]]=i;
					 }
                 	
				 }
                
                   cout<<min_idx;
           return 0;
}
