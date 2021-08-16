#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    int max=INT_MIN;
    int count =0;
    int i=0;
    while(i<n)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(count>max)
            {
                max=count;
            }
            count=0;
        }
        else
        {
		
        count++;
    }
		if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<max;
    return 0;

}
