#include<iostream>
using namespace std;

int max(int arr[], int n)
{
    int max=arr[0];
    for(int i=1; i<n;i++)
    {

        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int n)
{
	int min = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int main()
{
    int n;
    cout<<"enter the no. of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of array are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"the largest element is:"<< max(arr,n)<<endl;
    cout<<"the minimum element is:"<<min(arr,n);
    return 0;
}
