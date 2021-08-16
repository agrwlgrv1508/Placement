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
void InsertatEnd(node* &head,int val)
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
void DeleteAtEnd(node* head)
{
    node* temp=head;
    while(temp->next->next != NULL)
    {
        temp=temp->next;
    }
    node* delete_node=temp->next;
    temp->next=NULL;
    delete delete_node;
}
void DeleteAtBegin(node* &head)
{
    node* temp=head;
    node* delete_node=temp;
    head=temp->next;
    delete temp;
}
void display(node* head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
 node* head =NULL;
 InsertatEnd(head,1);
 InsertatEnd(head,2);
 InsertatEnd(head,3);
 DeleteAtEnd(head);
 //DeleteAtBegin(head);
 display(head);

 return 0;
}
