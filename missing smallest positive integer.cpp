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
    int counter =0;
    for(int i=0;i<n;i++)
    {
        if(counter==arr[i] && arr[i]>=0)
        {
                 counter+=1;
                 
        }
        else if (counter != arr[i] && arr[i]>0)
        {
        	cout<<counter;
            break;
        }
        else {
            continue;
        }
    }
    
    return 0;
}
