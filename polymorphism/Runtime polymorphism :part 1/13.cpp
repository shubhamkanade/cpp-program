#include<iostream>
using namespace std;;
class Base1
{
	public:
		Base1()
		{
			cout<<"Base Constructor\n";
		}
		~Base1()
		{
			cout<<"Base Destructor\n";
		}
};
class Derived1:public Base1
{
	public:
		Derived1()
		{
			cout<<"Derived1 Constructor\n";
		}
		~Derived1()
		{
			cout<<"Derived1 destructor\n";
		}
};
int main()
{
	Base1 *bp1=new Derived1;
	delete bp1;
	return 0;
}
