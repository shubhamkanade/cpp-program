#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
typedef struct node
{
	struct node* next;
	int data;
	struct node* prev;
}NODE,*PNODE,**PPNODE;
class doubly
{
	private://characteristcs
		PNODE head;
	public://behaviour
		doubly();
		~doubly();
		void display();
		int count();
		BOOL insertfirst(int);
		BOOL insertlast(int);
		BOOL insertatposition(int,int);
		BOOL deletefirst();
		BOOL deletelast();
		BOOL deleteatposition(int);
};
// constructor
doubly::doubly()
{
	head=NULL;
}
BOOL doubly::insertfirst(int no)
{
	PNODE newn=NULL;
	newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		newn->next=head;
		head->prev=newn;
		head=newn;
	}
	return TRUE;
}
void doubly::display()
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		cout<<head->data;
		temp=temp->next;
	}
}
int doubly::count()
{
	PNODE temp=NULL;
	int icnt=0;
	while(temp!=NULL)
	{
		icnt++;
		temp=temp->next;
	}
}
BOOL doubly::insertlast(int no)
{
	PNODE temp=head;
	PNODE newn=NULL;
	newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}
	return TRUE;
}
BOOL doubly::deletefirst()
{
	if(head==NULL)
	{
		return FALSE;
	}
	else
	{
		head=head->next;
		delete head->prev;
		head->prev=NULL;
	}
	return TRUE;
}
BOOL doubly::deletelast()
{
	PNODE temp=head;
	if(head==NULL)
	{
		return FALSE;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	if(temp->next==NULL)
	{
		delete temp;
		head=NULL;
	}
	else
	{
		temp->prev->next=NULL;
		delete temp;
	}
}
BOOL doubly::insertatposition(int no,int ipos)
{
	PNODE temp=head;
	PNODE newn=NULL;
	if((ipos<1)||(ipos>count()+1))
	{
		return FALSE;
	}
	if(ipos==1)
	{
		return(insertfirst(no));
	}
	else if(ipos==count()+1)
	{
		return(insertlast(no));
	}
	else
	{
		newn=new NODE;
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		while(ipos!=2)
		{
			temp=temp->next;
			ipos--;
		}
		temp->next->prev=newn;
		newn->next=temp->next;
		temp->next=newn;
		newn->prev=temp;
	}
	return TRUE;
}
BOOL doubly::deleteatposition(int ipos)
{
	PNODE temp=head;
	PNODE newn=NULL;
	if((ipos<1)||(ipos>count()+1))
	{
		return FALSE;
	}
	if(ipos==1)
	{
		return(deletefirst());
	}
	else if(ipos==count()+1)
	{
		return(deletelast());

	}
	else
	{
		while(ipos!=2)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		delete temp->next->prev;
		temp->next->prev=temp;
	}
	return TRUE;
}
doubly::~doubly()
{
	PNODE temp=head;
	while(head!=NULL)
	{
		head=head->next;
		delete head;
		head=temp;
	}
}
int main()
{
	doubly obj1,obj2;
	obj1.insertfirst(21);
	obj1.insertfirst(22);
	obj1.insertlast(23);
	obj1.insertlast(24);
	obj1.display();
	cout<<obj1.count();
	obj2.insertfirst(90);
	obj2.insertfirst(91);
	obj2.insertlast(92);
	obj2.insertlast(93);
	obj2.display();
	cout<<obj2.count();
	return 0;
}






































