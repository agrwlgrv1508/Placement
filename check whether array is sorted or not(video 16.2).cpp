#include<iostream>
using namespace std;

bool sorted_array(int arr[],int n )
{
    if(n==1)
    {
        return true; 
    }
    int rest_array=sorted_array(arr+1,n-1);
    return(arr[0]<arr[1] && rest_array);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    cout<<sorted_array(arr,7);
    return 0;
}
