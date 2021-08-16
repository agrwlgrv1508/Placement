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
void insertion(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head =n;
        return;
    }
    node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
node* reverse(node* &head)
{
    if(head == NULL)
    {
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    node* next_ptr;
    while(curr != NULL)
    {
        next_ptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next_ptr;
    }
    return prev;
}
node* reverserecursive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
void display(node* head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
int main()
{
    node* head =NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    //node* newhead=reverse(head);
    node* newhead=reverserecursive(head);
    display(newhead);
    return 0;
}
