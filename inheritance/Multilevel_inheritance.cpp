#include<iostream>
using namespace std;

class Base1
{
	public:
		Base1()
		{
			cout<<"Base1 constructor\n";
		}
		~Base1()
		{
			cout<<"Base1 destructor\n";
		}
};
class Base2
{
	public:
		Base2()
		{
			cout<<"Base2 constructor\n";
		}
		~Base2()
		{
			cout<<"Base2 destructor\n";
		}
};

class Derived:public Base1,Base2
{
	public:
		Derived()
		{
			cout<<"Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Derived destructor\n";
		}
};

int main()
{
	Derived dobj;
	return 0;
}
