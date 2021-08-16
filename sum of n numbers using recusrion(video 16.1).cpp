#include<iostream>
using namespace std;
 int sum(int n,int result)
 {
     if (n>=1)
     {
	 result=result+n; 
     return sum(n-1,result);
	 }
     else
     return result;
 }

int main()
{
    int n;
  cin>>n;
    int result=0;
cout<< sum(n,result);

return 0;
}
