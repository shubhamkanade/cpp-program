#include<stdio.h>
#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			fun();
		}
		virtual void fun()
		{
			cout<<"fun() of Base\n";
		}
};
class Derived:public Base
{
	public:
		void fun()
		{
			cout<<"fun() of Derived\n";
		}
};
int main()
{
	Derived dobj;
	return 0;
} 
