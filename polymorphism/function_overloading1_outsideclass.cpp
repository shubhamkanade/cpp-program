#include<stdio.h>
#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int);
};
void demo::fun(int i)
{
	cout<<"demo fun";
}
class hello:public demo
{
	public:
		void fun(int,int);
};
void hello::fun(int i,int j)
{
	cout<<"\ninside fun";
}
int main()
{
	demo obj;
	obj.fun(11);
	hello dobj;
	dobj.fun(11,21);
	return 0;
}
