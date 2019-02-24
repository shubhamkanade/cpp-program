#include<iostream>
using namespace std;
class Base
{
	public:
		void fun()
		{
			cout<<"base fun"<<endl;
		}
		void gun()
		{
			cout<<"Insuide Base gun"<<endl;
		}
};
class Derived:public Base
{
	private:
		Base::fun;
};
int main()
{
	Base bobj;
	bobj.fun();
	Derived dobj;
//	dobj.fun();
	return 0;
}

