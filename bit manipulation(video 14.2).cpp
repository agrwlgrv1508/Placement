#include<iostream>
using namespace std;

int poweroftwo(int n)
{
    return !(n && (n & (n-1)));
}
int countno_ofone(int n)
{
    int count =0;
    while(n)
    {
        n= n & n-1;
        count++;
    }
    return count;
}
void subset(int arr[], int n)
{
    for(int i=0;i<1<<n;i++)
    {
        for(int j=0;j<n;j++) 
        {
            if( i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main()
{
   //cout<< poweroftwo(9);
   //cout<<countno_ofone(19);
 int arr[]={1,2,3};
 subset(arr,3);
    return 0;
}
