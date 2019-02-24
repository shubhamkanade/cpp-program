#include<iostream>
using namespace std;
class Base
{
	public:
		void fun(int i)
		{
			cout<<"Base fun\n";
		}
		void fun(int i,int j)
		{
			cout<<"Base fun\n";
		}
};
class Derived:public Base
{
	public:
		void fun(int i)
		{
			cout<<"derivde fun\n";
		}
};
int main()
{
	Base bobj;
	Derived dobj;
	bobj.fun(10);
	bobj.fun(10,20);
	dobj.fun(20);
	return 0;
}

