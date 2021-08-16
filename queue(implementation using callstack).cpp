#include<iostream>
#include<stack>
using namespace std;
void Insertatbottom(stack<int> &s1,int ele)
{
    if(s1.empty())
    {
        s1.push(ele);
        return;
    }
    int top_ele=s1.top();
    s1.pop();
    Insertatbottom(s1,ele);
    s1.push(top_ele);
}
void reverse(stack<int> &s1)
{
    if(s1.empty())
    {
        return;
    }
    int ele=s1.top();
    s1.pop();
    reverse(s1);
    Insertatbottom(s1,ele);
}
class queue
{
    public:
    stack<int> s1;
    void push(int x)
    {
        s1.push(x);
    }
    int dequeue()
    {
        if(s1.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty())
        {
            return x;
        }
        int item=dequeue();
        s1.push(x);
        return item;
    }
    bool Isempty()
    {
        if(s1.empty())
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
    q.push(4);
    q.push(5);
   
   cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}
