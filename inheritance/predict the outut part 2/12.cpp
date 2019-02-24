#include<iostream>
using namespace std;
class Base1
{
	public:
		void fun()
		{
			cout<<"Base 1 fun"<<endl;
		}
};
class Base2
{
	public:
		void fun()
		{
			cout<<"Base2 fun"<<endl;
		}
};
class Derived:public Base1,public Base2
{
	public:
		void fun()
		{
			cout<<"Derived fun"<<endl;
		}
};
int main()
{
	Derived dobj;
	dobj.Base1::fun();
	dobj.Base2::fun();
	dobj.fun();
	return 0;
}
