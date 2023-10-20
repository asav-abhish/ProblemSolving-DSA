// https://hack.codingblocks.com/app/contests/4001/1100/problem

#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int d)
	{
data=d;
next=NULL;
	}
};


void insertion(node*& head,node*& tail,int d)
{



	if(head==NULL)
	{
		node* p=new node(d);
		head=p;
		tail=p;
	}
	else
	{
		node* p=new node(d);
		tail->next=p;
		tail=p;

	}
}


node* reverse(node* head)
{

	node*prev=NULL;
	node* current=head;

	while(current!=NULL)
	{
		
		node* temp=current->next;
		current->next=prev;
		prev=current;
		current=temp;
	}
	return prev;
}




void elemet(node*head,node*tail,int n,int k)
{k=k%n;

if(n>=k)
	{node*newhead=head;
	for(int i=1;i<=n-k;i++)
	{newhead=newhead->next;

	}

	node *newtail=head;
	for(int i=1;i<=n-k-1;i++)
	{
		newtail=newtail->next;
	}

	newtail->next=NULL;
	tail->next=head;
	head=newhead;}
	


	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main() {
node*head=NULL;
node*tail=NULL;
	int n;
	cin>>n;



	for(int i=1;i<=n;i++)
	{int data;
	cin>>data;
insertion(head,tail,data);
	}


	int k;
	cin>>k;
elemet(head,tail,n,k);


	return 0;
}
