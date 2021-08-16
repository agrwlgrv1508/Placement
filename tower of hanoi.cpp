#include<iostream>
using namespace std;

void TOH(int n,char src,char helper,char des)
{
    if(n==0)
    {
        return;
    }
    TOH(n-1,src,des,helper);
    cout<<"Move from"<<src<<"to"<<des<<endl;
    TOH(n-1,helper,src,des);
}

int main()
{
int n=3;

TOH(n,'A','B','C');
return 0;
}
