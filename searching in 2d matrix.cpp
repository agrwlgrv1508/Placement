#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter the searching element:";
     cin>>key;
int i=0;
int j=m-1;
bool result=false;
    while(i<n && j<m)
    {
        if(arr[i][j]<key)
        {
            i++;
        }
        if(arr[i][j]==key)
        {
            result=true;
            break;
        }
        else
        {
            j--;
        }
    }
    cout<<"\n";
    if(result==true)
    {
        cout<<"wohoo!! element found"<<endl;
    }
    else
    {
        cout<<"Sorry!! element is not present"<<endl;
    }
    return 0;
}
