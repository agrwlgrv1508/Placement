#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    int temp[n1][n4];
    if(n2==n3)
    {
    	int arr1[n1][n2];
    cout<<"enter the elements of array 1"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr1[i][j];
        }
    }
    int arr2[n3][n4];
    cout<<"enter the elements of array 2"<<endl;
    for(int i=0;i<n3;i++)
    {
        for(int j=0;j<n4;j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    
    //Matrix multiplication

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n4;j++)
        {
            int c=0;

            for (int k=0;k<n2;k++)
            {
                c=arr1[i][k]*arr2[k][j]+c;
            }
            temp[i][j]=c;
            
        }
        }
    }
    else
    {
	cout<<"Sorry!! Matrices cannot be multiplied"<<endl;
	return 0; 
}
cout<<"the resultant matrix is:"<<endl;
for(int i=0;i<n1;i++)
{
	for(int j=0;j<n4;j++)
	{
		cout<< temp[i][j]<<" ";
	}
	cout<<endl;
}
return 0;
}
