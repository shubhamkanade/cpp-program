#include<stdio.h>
//#include<iostream>
using namespace std;
class Base
{
	public:
		void fun();
};
void Base::fun()
{
	printf("base fub\n");
}
class Derived:public Base
{
	public:
		void fun();
};
void Derived::fun()
{
	printf("Derived fun");
}
int main()
{
Base bobj;
Derived dobj;
bobj.fun();
dobj.fun();
dobj.Base::fun();
return 0;
}
