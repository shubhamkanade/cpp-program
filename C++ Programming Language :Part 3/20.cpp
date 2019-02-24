#include<iostream>

//THis program demomstrates the concept we can call derived class function in case of upcasting by using type conversion
using namespace std;

//Base Class
class Base
{
	public:
		void fun();
};

void Base::fun()
{

	cout<<"In Base fun\n";
}
//Derive class
class Derived:public Base
{
	public:
		void fun();
};
void Derived::fun()
{

	cout<<"In Derived fun\n";
}

int main()
{
	Base *bp=new Derived();
	((Derived*)bp)->fun();
	return 0;
}
