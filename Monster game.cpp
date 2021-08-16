#include<iostream>
using namespace std;
void sort(int arr1[],int arr2[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int temp1=arr1[j];
                arr1[j]=arr1[i];
                arr1[i]=temp1;
                
                int temp2=arr2[j];
                arr2[j]=arr2[i];
                arr2[i]=temp2;

            }
        }
    }
}

int No_of_monsters(int arr1[],int arr2[],int n,int power)
{
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(  arr1[i]<=power)
        {
            power+=arr2[i];
            count++;
            
        }
}
    return count;
}
int main()
{
    int n;
   cout<<"Enter no. of monsters"<<endl;
    cin>>n;
    int power;
    cout<<"Enter initial power"<<endl;
    cin>>power;
    int arr1[n];
    cout<<"Enter power of monsters"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter bonus"<<endl;
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr2,n);
   /* for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }*/
    cout<<"No. of monsters defeated are:"<<endl;
    cout<<No_of_monsters(arr1,arr2,n,power);
    return 0;
}
