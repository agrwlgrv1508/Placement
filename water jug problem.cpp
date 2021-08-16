#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
	int n;
	cout<<"enter the no. of elements of array"<<endl;
	cin>>n;
int height[n];
cout<<"enter the elements of array:"<<endl;
for(int i=0;i<n;i++)
{
	cin>>height[i];
}
int temp[n];
int l=0;

for(int i=0;i<n-1;i++)
{
    int length=min(height[i],height[n-1]);
    if(length>=l)
    {
        l=length;
    }
}
cout<<l<<endl;

int a=0;
int area=0;
for(int i=0;i<n;i++)
{
    
    if(height[i]>=l)
    {
       int width= n-i-1;
        area=l*width;
        if (area>a)
        {
            a=area;
        }
    }
}
cout<<"output:"<<a;
   return 0; 
}
