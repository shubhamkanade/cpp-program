#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Base constructor"<<endl;
		}
		~Base()
		{
			cout<<"Base destructor"<<endl;
		}
};
class Base1
{
	public:
		Base1()
		{
			cout<<"Base1 constructor"<<endl;
		}
		~Base1()
		{
			cout<<"Base1 destructor"<<endl;}
};
class Base2
{
	public:
		Base2()
		{
			cout<<"Base2 constructor"<<endl;
		}
		~Base2()
		{
			cout<<"Base2 destructor"<<endl;
		}
};
class Derived:public Base1,virtual public Base,public Base2
{
	public:
		Derived()
		{
			cout<<"Derived Constructor"<<endl;
		}
		~Derived()
		{
			cout<<"Derived destructor"<<endl;
		}
};
int main()
{
	Derived dobj;
	return 0;
}


