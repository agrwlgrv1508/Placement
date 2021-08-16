#include<iostream>
using namespace std;

void dec(int n)
{
	if(n>0)
	{
		cout<<n<<endl;
		dec(n-1);
	}
	
   else
   {
   	return;
   }
}
void inc(int n,int m)
{
	if(m<0)
	{
		return;
	}
	
	int result=0;
	result=n-m;
	cout<<result<<endl;
	inc(n,m-1);
}

int main()
{
    int n;
    cin>>n;
    int m=n-1;
    dec(n);
    cout<<"\n";
   inc(n,m);

    return 0;
}
