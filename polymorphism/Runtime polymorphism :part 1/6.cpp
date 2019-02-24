#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void fun()
		{
			cout<<"Fun of Base\n";
		}
		void gun()
		{
			cout<<"Gun of Base\n";
		}
		virtual void sun()
		{
			cout<<"SUn of Base\n";
		}
};
class Derived:public Base
{
	public:
		void fun()
		{
			cout<<"Fun of Derived\n";
		}
		virtual void gun()
		{
			cout<<"Gun of Derived\n";
		}
		void sun()
		{
			cout<<"Sun of Derived\n";
		}
};
int main()
{
	Base *dp=new Derived;
	dp->fun();
	dp->gun();
	dp->sun();
	return 0;
}

