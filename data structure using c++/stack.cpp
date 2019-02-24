#include<iostream>
#include<malloc.h>
#include<stdio.h>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
class stack //class declaration
{
	private://characteristics
		int *arr;
		int size;
		int top;
	public://behaviour
		stack();
		stack(int);
		stack(stack&);
		~stack();
		BOOL isstackempty();
		BOOL isstackfull();
		void push(int);
		int  pop();
		void display();
};
stack::stack()
{
	size=10;
	arr=(int*)malloc(size*sizeof(int));  //arr=new int[size];
} 
stack::stack(int ino)
{
	size=ino;
	arr=new int[size];
}
stack::stack(stack &ref)
{
	this->size=ref.size;
	arr=new int[size];
	(*this).top=ref.top;
}
stack::~stack()
{
	delete []arr;
	size=0;
}
BOOL stack::isstackempty()
{
	if(top==-1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
BOOL stack::isstackfull()   //object oriented functions
{
	if(top==size-1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
void stack::push(int no)
{
	if(isstackfull())
	{
		return;
	}
	top++;
	arr[top]=no;
}
int stack::pop()
{
	return arr[top--];
}
void stack::display()
{
	for(int i=0;i<=top;i++)
	{
	//	printf("\nthe data is %d",arr[i]);
		cout<<"the data is\n"<<arr[i];
	}
}
int main()
{
stack obj1(); //default consrtuctor gets called
stack obj2(5);
obj2.push(11);
obj2.push(21);
obj2.push(51);

cout<<obj2.pop();
obj2.display();
return 0;
}
































































































