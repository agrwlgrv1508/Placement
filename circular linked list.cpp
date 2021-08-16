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
void insertionAthead(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next !=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertionAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        insertionAthead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next != head)
{
    temp=temp->next;
}
temp->next=n;
n->next=head;
}
void delete_at_head(node* &head)
{
    node* temp=head;
    while(temp->next !=head)
    {
        temp=temp->next;
    }
    node* to_delete=head;
    temp->next=head->next;
    head=head->next;
    delete to_delete;
}
void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        delete_at_head(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count !=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* to_delete=temp->next;
    temp->next=temp->next->next;
    delete to_delete;
}
void display(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp !=head);
  cout<<head->data;
    cout<<endl;
}
int main()
{
    node* head=NULL;
    insertionAtTail(head,1);
    insertionAtTail(head,2); 
    insertionAtTail(head,3);
    insertionAtTail(head,4);
     display(head);
    insertionAthead(head,5);
   display(head);
   deletion(head,1);
   display(head);
    return 0;
}
