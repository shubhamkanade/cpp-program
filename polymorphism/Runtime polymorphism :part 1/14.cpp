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
			cout<<"Base1 Dest\n";
		}
};
class Derived1:public Base1
{
	public:
		Derived1()
		{
			cout<<"Derived1 constructor\n";
		}
		~Derived1()
		{
			cout<<"Derived1 destructor\n";
		}
};
int main()
{
	Base1 *bp1=new Derived1;
	cout<<"size of Base class: "<<sizeof(Base1)<<endl;
	cout<<"sizeof  derived1 class : "<<sizeof(Derived1)<<endl;
	delete bp1;
	return 0;
}
