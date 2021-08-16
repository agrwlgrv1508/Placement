#include<iostream>
using namespace std;

class node
{
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

void InsertionatEnd(node* &head,int val)
{
    if(head==NULL)
    {
        head=n;
        return ;
    }
     node* n=new node(val);
     node* temp=head;
     while(temp->next != NULL)
     {
         temp=temp->next;
     }
     temp->next=n;
     n->prev=temp;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    InsertionatEnd(head,1);
    InsertionatEnd(head,2);
    InsertionatEnd(head,3);
    display(head);
    return 0;
}