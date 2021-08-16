#include <bits/stdc++.h>
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
        q2.push(x);
        n++;
        while(!(q1.empty()))
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop()
    {
        q1.pop();
        n--;
    }
    int top()
    {
        return q1.front();
        
        
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
// cout<<s1.size()<<endl;
 cout<<s1.top()<<endl;
 s1.pop();
 cout<<s1.top()<<endl;
 s1.pop();
  cout<<s1.top()<<endl;
 s1.pop();
 cout<<s1.top()<<endl;
 s1.pop();
 cout<<s1.size()<<endl;
 return 0;
}
