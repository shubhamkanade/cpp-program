#include<iostream>
using namespace std;
class Base1
{
	public:
		virtual void fun()
		{
			cout<<"fun of Base1\n";
		}
		void gun()
		{
			cout<<"Gun of Base1\n";
		}
};
class Base2
{
	public:
		void fun()
		{
			cout<<"Fun of Base2\n";
		}
		virtual void gun()
		{
			cout<<"Gun of Base2\n";
		}
};
class Derived:public Base1,public Base2
{
	public:
		virtual void fun()
		{
			cout<<"fun of Derived\n";
		}
		virtual void gun()
		{
			cout<<"gun of Derived\n";
		}
};
int main()
{
	Base1 *bp1=new Derived;
	Base2 *bp2=new Derived;
	bp1->fun(); //fun of derived
	bp1->gun(); //gun of base1
	bp2->fun(); //fun of base2
	bp2->gun(); //gun of derived
	return 0;
}
