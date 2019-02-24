#include<iostream>
using namespace std;
class base
{
	public:
		void fun()
		{
			cout<<"fun of base";
		}
};
class derived:public base
{
	public:
		void fun()
		{
			cout<<"fun of derived";
		}
};
int main()
{
	base bobj;
	derived dobj;
	base &bref=bobj;
	bref.fun();
	derived &dref=dobj;
	dref.fun();
	base &bref1=bobj;
	bref1.fun();
	return 0;
}
