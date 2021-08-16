#include <iostream>
using namespace std;

int getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
int setbit(int n,int pos)
{
    return (n | (1<<pos));
}
int clearbit(int n,int pos)
{
    int mask= ~(1<<pos);
    return (n & mask);
}
int update(int n,int pos,int val)
{
    int mask= ~(1<<pos);
    n= n & mask;
    return (n | val<<pos);
}
int main()
{
   // cout<<getBit(5,2);
   cout<<setbit(15,3);
 // cout<<clearbit(5,2);
 //cout<<update(5,1,1);
    return 0;
}
