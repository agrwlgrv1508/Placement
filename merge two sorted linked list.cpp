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
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
node* merge(node* &head1,node* &head2)
{
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummy_node=new node(-1);
    node* ptr3=dummy_node;
    while(ptr1 != NULL && ptr2 !=NULL)
    {
        if(ptr1->data<ptr2->data)
        {
           ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
           ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1 != NULL)
    {
       ptr3->next=ptr1;
       ptr1=ptr1->next;
       ptr3=ptr3->next;
    }
    
    while(ptr2 != NULL)
    {
       ptr3->next=ptr2;
       ptr2=ptr2->next;
       ptr3=ptr3->next;
}
return dummy_node->next;
}
node* mergerecursive(node* &head1,node* &head2)
{

    node* result;
    if(head1==NULL)
    {
        return head2;
    }
    if(head2 == NULL )
    {
        return head1;
    }
    if(head1->data<head2->data)
    {
        result=head1;
        result->next= mergerecursive(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next= mergerecursive(head1,head2->next);
    }
    return result ;
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
    node* head1=NULL;
    node* head2=NULL;
    insertion(head1,1);
    insertion(head1,4);
    insertion(head1,6);
    display(head1);
    insertion(head2,2);
    insertion(head2,3);
    insertion(head2,5);
    insertion(head2,7);
    display(head2);
    node* newhead=mergerecursive(head1,head2);
    display(newhead);
    return 0;
}
