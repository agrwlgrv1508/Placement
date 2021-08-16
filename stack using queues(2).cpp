#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack()
    {
        n=0;
    }
    void push(int x)
    {
        q1.push(x);
        n++;
    }
    void pop()
    {
        if(q1.empty())
        {
            return ;
        }
        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
            q1.pop();
            queue<int> temp=q1;
            q1=q2;
            q2=temp;
            n--;
    }
    int top()
    {
        if(q1.empty())
        {
            return -1 ;
        }
        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);
        queue<int> temp=q1;
            q1=q2;
            q2=temp;
        return ans;
    }
    int size()
    {
        return n;
    }

};

int main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<s1.size()<<endl;
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.size();
    return 0;
}
