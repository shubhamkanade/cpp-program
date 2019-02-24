/*
   Smart Pointer:
   => When we want to call a member function of class then we can use object of that class or pointer of that class.
   => if we use object of that class then we have to use dot ('.') operator to access member function
   and if we use pointer then we have to use indirect ('->') operator to access member function.
   => But if you want to access member function of class by using object of that class and '->' operator then gives error. 
   => To solve this error we have to overload a '->' operator and returns the address of some another object...
 */
#include<iostream>
using namespace st;
class Demo
{
	public:
		const int i;

		Demo():i(11)
		{
		}

		void gun();
};
void Demo::gun()
{
	cout<<"Inside gun";
}
class SmartPointer
{
	public:
		Demo d;  //smart pointer
		Demo* operator ->();
};
Demo* SmartPointer::operator ->()  //overload -> (indirect operator)
{
	return &d;
}
int main()
{
	SmartPointer sp;
	sp->gun();
	return 0;
}

