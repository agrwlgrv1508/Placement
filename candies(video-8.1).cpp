#include<iostream>
using namespace std;

int main()
{
    int candies[3]={12,1,12};
    char output[3];
    int extra_candies=10;
    int max=candies[0];
    for(int i=1;i<3;i++)
    {
        if(candies[i]>max)
        {
            max=candies[i];
        }
    }
for(int i=0;i<3;i++)
{
candies[i]=candies[i]+extra_candies;
if(candies[i]>=max)
{
  output[i]='t';
}
else
{
  output[i]='f';
}
}
for(int i=0;i<3;i++)
{
    cout<<output[i]<<" ";
}
return 0;
}
