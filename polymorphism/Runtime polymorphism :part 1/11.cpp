#include<iostream>
using namespace std;
class Base1
{
	public:
		virtual void fun()
		{
			cout<<"Fun of Base1\n";
		}
		virtual void gun()
		{
			cout<<"gun of Base1\n";
		}
		void sun()
		{
			cout<<"SUN OF base1\n";
		}
};
class Derived1:public Base1
{
	public:
		void fun()
		{
			cout<<"Fun of Derived1\n";
		}
		static void gun()
		{
			cout<<"gun of derived1\n";
		}
		virtual void sun()
		{
			cout<<"Sun of Derived\n";
		}
};
int main()
{
	Base1 *bp1=new Derived1;
	bp1->fun();
	bp1->gun();
	bp1->sun();
	return 0;
}
