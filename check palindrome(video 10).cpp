#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i=0;
    int j=n-1;
    int flag=0;
    while(i<j)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
            flag=1;
        }
        else{
            flag=0;
            break;
        }

    }
    if(flag)
    {
        cout<<"word is palindrome";
    }
    else
    {
        cout<<"word is non palindrome";
    }
return 0;
}
