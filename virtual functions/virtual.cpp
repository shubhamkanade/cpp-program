#include<iostream>
using namespace std;
class a
{
	public:
		int a;
		void fun()
		{
		}
};
class b1:virtual public a
{
	public:
		int b1;
		void gun(){}
};
class b2:virtual public a
{
	public:
		int b2;
		void sun(){}
};
class c:public b1,public b2
{
	public:
		int c;
		void run(){}
};
int main()
{
	c cobj;
	cobj.a=10;
	cobj.fun();
	return 0;
}
