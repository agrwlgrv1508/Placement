#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }cout<<endl;
    vector<int>::iterator it;
    for(it=v1.begin();it != v1.end();it++)
    {
       cout<<*it<<" ";
    }
    cout<<endl;
    int max= *max_element(v1.begin(),v1.end());
     cout<<max;
cout<<endl;
     int min= *min_element(v1.begin(),v1.end());
cout<<min;
    cout<<endl;
    
    return 0;
}
