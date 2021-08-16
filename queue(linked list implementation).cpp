#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
      data=val;
      next=NULL;
    }
};
class queue
{
    public:
    node* front=NULL;
    node* back=NULL;
    void enqueue(int val)
    {
       node* n=new node(val);
       if(front==NULL)
       {
           front=n;
           back=n;
           return;
       }
       back->next=n;
       back=n;
    }
    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        node* is_delete=front;
        front=front->next;
        delete is_delete;
    }
    int peek()
    {
        if(front==NULL)
        {
            return -1;
        }
        return front->data;
    }
    bool isEmpty()
    {
        if(front==NULL)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
   //cout<<q.peek()<<endl; 
    q.dequeue();
     q.dequeue();
      q.dequeue();
       q.dequeue();
 //cout<<q.peek()<<endl;
cout<<q.isEmpty();
    return 0;
}
