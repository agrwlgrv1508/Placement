#include<iostream>
#include<stack>
using namespace std;

class queue
{
    public:
    stack<int> s1;
    stack<int>s2;

    void push(int x)
    {
        s1.push(x);
    }
    int dequeue()
    {
     if(s1.empty() && s2.empty())
     {
         cout<<"Queue is empty"<<endl;
         return -1;
     }
     while(!s1.empty())
     {
         int top_ele=s1.top();
         s1.pop();
         s2.push(top_ele);
     }
     int res=s2.top();
     s2.pop();
     return res;
    }
    bool isEmpty()
    {
        if(s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}
