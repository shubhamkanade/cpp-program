#include<iostream>
using namespace std;

class A
{
	public:
		void fun()
		{
			cout<<"Inside fun A\n";
		}
};
class B:public A
{
	public:
		void fun()
		{
			cout<<"Inside fun B\n";
		}
};
class C:public A
{
	public:
		void fun()
		{
			cout<<"Inside fun C\n";
		}
};
class D:public B,public C
{
	public:
		void fun()
		{
			cout<<"Inside fun D\n";
		}
};
int main()
{
	D dobj;
	dobj.fun();
	return 0;
}
