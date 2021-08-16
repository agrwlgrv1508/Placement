#include<iostream>
using namespace std;

int total(int s,int x,int y,int count)
{
    
    if(s<=1)
    {
         return count;
    }
    int ans=0;
    count++;
    ans=s-x+y;
    total(ans,x,y,count);
    
   
}
int result(int arr[],int n,int x,int y)
{
    int sum=0;
   
    for (int i=0;i<n;i++)
    {   int count =0;
        count=total(arr[i],x,y,0);
        //cout<<count<<" ";
       sum=sum+count;
    }
       return sum;
}
int main()
{
	int n;
	cout<<"Enter the no. of walls:";
	cin>>n;
	int arr[n];
	cout<<"Enter the height of wall"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"Enter the max jump:";
	cin>>x;
	int y;
	cout<<"Enter the drop:";
	cin>>y;
	cout<<"Total no. of jumps:";
    cout<< result(arr,n,x,y);
    return 0;
}
