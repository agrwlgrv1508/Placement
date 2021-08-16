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
node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr !=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node* reverse_recursive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* new_head=reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;
}
node* reversek(node* &head,int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count =0;
    while(currptr != NULL && count<k )
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr !=NULL)
    {
     head->next=reversek(nextptr,k);
    }
    return prevptr;  
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
void makecycle(node* &head,int pos)
{
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next !=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
bool detectcycle(node* &head)
{
    node* slowptr=head;
    node* fastptr=head;
    while(fastptr != NULL && fastptr->next != NULL)
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(fastptr==slowptr)
    {
      return true;
    }
    }
    
 return false;   
}
void removecycle(node* &head)
{
    node* slowptr=head;
    node* fastptr=head;
    do
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    } while (fastptr != slowptr);

     fastptr=head;
     while(fastptr->next == slowptr->next)
     {
         slowptr=slowptr->next;
      fastptr=fastptr->next;
     }
     slowptr->next=NULL;
}
int main()
{
    node* head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
       insertion(head,5);
     insertion(head,6);
    int k=3;
    int pos=3;
    //node* newhead=reverse(head);
   // node* newhead=reverse_recursive(head);
    //node* newhead=reversek(head,k);
    makecycle(head,pos);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    display(head);
    return 0;
}
