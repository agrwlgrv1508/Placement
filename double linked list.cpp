#include<iostream>
using namespace std;

class node
{
	public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void InsertionatHead(node* &head,int val)
{
   node* n=new node( val);
   n->next=head;
   if(head != NULL)
   {
     head->prev=n;
   }
   head=n;
}
void InsertionatEnd(node* &head,int val)
{
   
     node* n=new node(val);
      if(head==NULL)
    {
       InsertionatHead(head,val);
        return ;
    }
     node* temp=head;
     while(temp->next != NULL)
     {
         temp=temp->next;
     }
     temp->next=n;
     n->prev=temp;
}
void deletionAthead(node* &head)
{
    node* to_delete=head;
    head=head->next;
    head->prev=NULL;
    delete to_delete;
}
void deletion(node* &head, int pos)
{
    if(pos==1)
    {
        deletionAthead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos)
    {
         temp=temp->next;
         count++;
    }
    temp->prev->next=temp->next;
    
    if(temp->next != NULL)
    {
      temp->next->prev=temp->prev;
    }
    delete temp;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    InsertionatEnd(head,1);
    InsertionatEnd(head,2);
    InsertionatEnd(head,3);
    InsertionatHead(head,5);
    deletion(head,1 );
    display(head);
    return 0;
}
