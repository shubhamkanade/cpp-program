#include<iostream>
using namespace std;
class Base
{
	public:
		static void fun()
		{
			cout<<"static fun of base";
		}
		void gun()
		{
			cout<<"gun of base";
		}
};
class Derived:public Base
{
	public:
		static void fun()
		{
			cout<<"static fun of derived";
		}
		void gun()
		{
			cout<<"gun of derived";
		}
};
int main()
{
	Base bobj;
	Derived dobj;
	bobj.fun();
	bobj.gun();
	dobj.fun();
	dobj.gun();
	Base::fun();
	Derived::fun();
	Derived::Base::fun();
	return 0;
}





















