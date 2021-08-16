#include<iostream>
using namespace std;

bool isSafe(int** arr,int n,int x,int y)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}
bool ratIn_maze(int** arr,int n,int x,int y,int** output)
{

    if(x==n-1 && y==n-1)
    {
        output[x][y]=1;
        return true;
    }
    if(isSafe(arr,n,x,y))
    {
        output[x][y]=1;
        
           if(ratIn_maze(arr,n,x,y+1,output))
        {
            return true;
        }
        
		if(ratIn_maze(arr,n,x+1,y,output))
        {
            return true;
        }
        
        output[x][y]=0; //backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr=new int* [n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int** output=new int* [n];
    for(int i=0;i<n;i++)
    {
        output[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            output[i][j]=0;
        }
    }
    if(ratIn_maze(arr,n,0,0,output))
    {
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<output[i][j]<<" ";
        }
		cout<<endl;
    }}
    cout<<"unsuccessful"<<endl;
    return 0;
}
