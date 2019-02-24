#include<iostream>
using namespace std;
class Hello
{
	public:
	Hello()
{}

		Hello(int i)
		{
			cout<<"\nHello parameterized constructor";
		}
		~Hello()
		{
			cout<<"\nHello destructor";
		}
};
class Demo:public Hello
{
	public:
	Demo()
{
}
		Demo(int i)
		{
			cout<<"\nDemo parameterized constructor";
		}
		~Demo()
		{
			cout<<"\nDemo destructor";
		}
};
class Base
{
	public:
		Demo dobj;
		Base(int i)
		{
			cout<<"\nBase parametrized constructor";
		}
		~Base()
		{
			cout<<"\nBase destructor";
		}
};
int main()
{
	Base bobj(11);
	return 0;
}
