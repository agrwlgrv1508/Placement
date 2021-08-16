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
void insertion(node* &head ,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next !=NULL)
{
    temp=temp->next;
}
temp->next=n;
}
void EvenafterOdd(node* head)
{
    node* odd=head;
    node* even=head->next;
    node* even_start=even;
    while(odd->next !=NULL && even->next !=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=even_start;
   
}
void display(node* head)
{
   node*temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data<<"->";
       temp=temp->next;
   }cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    for(int i=1;i<=5;i++)
    {
        insertion(head,i);
    }
    EvenafterOdd(head);
    display(head);
    return 0;
    }
