#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtend(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertatBegin(Node* &head,int val)
{
	Node* n1=new Node(val);
	Node* temp=n1;
	temp->next=head;
	head=temp;
}
bool Search(Node* &head,int key)
{
	Node* temp=head;
	while(temp != NULL)
	{
		if(temp->data==key)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteNode(Node* &head,int val)
{
    Node* temp=head;
    while(temp->next->data != val)
    {
        temp=temp->next;
    }
    Node* delete_node=temp->next;
    temp->next=temp->next->next;
    delete delete_node;
}
int main()
{
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	insertAtend(head,i+1);
	}
    //insertAtend(head,1);
    //insertAtend(head,2);
    //insertAtend(head,3);
    insertatBegin(head,6);
       insertatBegin(head,7);
        deleteNode(head,1);
   display(head);
 // cout<< Search(head,6);
    return 0;
}
