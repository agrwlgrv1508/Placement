#include<iostream>
using namespace std;
int main()
{
	int arr[7]={0,1,2,4,5,6,7};
	int pi=4;
	int temp1[7];
int s=0;
	for(int i=pi;i<7;i++)
	{
		temp1[i-pi]=arr[i];
		s=s+1;
	}
	for(int i=s;i<7;i++)
	{
		temp1[i]=arr[i-s];
	}
	for(int i=0;i<7;i++)
	{
		cout<<temp1[i]<<" ";
	}
	return 0;
}
