//output are written in comments 
#include<iostream>
using namespace std;
class Base1
{
	public:
		virtual void fun()
		{
			cout<<"Fun of Base1\n";
		}
		void gun()
		{
			cout<"Gun of Base1\n";
		}
		void sun()
		{
			cout<<"Sun of Base1"<<endl;
		}
};
class Derived1:public Base1
{
	public:
		void fun()
		{
			cout<<"Fun of Derived1\n";
		}
		void gun()
		{
			cout<<"Gun of Derived1\n";
		}
		virtual void sun()
		{
			cout<<"sun of Derived1\n";
		}
};
class Derived2:public Derived1
{
	public:
		void fun()
		{
			cout<<"fun of Derived2\n";
		}
		virtual void gun()
		{
			cout<<"gun of Derived2\n";
		}
		virtual void sun()
		{
			cout<<"sun of Derived2\n";
		}
		virtual void run()
		{
			cout<<"run of Derived2\n";
		}
};
int main()
{
	Base1 *bp1=new Derived1;
	Base1 *bp2=new Derived2;
	Derived1 *dp1=new Derived2;
	bp1->fun();//fun of deriv1
	bp1->gun(); //gun of base1 (no output)
	bp1->sun(); //sun of base1
	bp2->fun(); //fun of derived2
	bp2->gun(); //gun of base1 (no output on console)
	bp2->sun(); //sun of base1
	dp1->fun(); //fun of derived1(fun of derived2 on console)
	dp1->gun(); //gun of derived1
	dp1->sun(); //sun of derived2
	return 0;
}
