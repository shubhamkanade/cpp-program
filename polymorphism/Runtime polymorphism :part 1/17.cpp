#include<stdio.h>
#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		virtual void fun()
		{
			cout<<"Demo Fun\n";
		}
};
int main()
{
	Demo dobj1,dobj2;
	int *p=(int*)&dobj1;
	int  *q=(int*)&dobj2;
	if(*q==*p)
		cout<<"VTABLE is shared\n";
	else
		cout<<"vatale is differnt\n";
	return 0;
}
