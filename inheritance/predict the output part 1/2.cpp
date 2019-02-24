#include<iostream>
using namespace std;
class Hello
{
	public:
		Hello()
		{
			cout<<"\nHello constructor";
		}
		~Hello()
		{
			cout<<"\nhello destructor";
		}
};
class Demo
{
	public:
		Hello hobj;
		Demo()
		{
			cout<<"\nDemo Constructor";
		}
		~Demo()
		{
			cout<<"\nDemo Destructor";
		}
};
class Base
{
	public:
		Demo dobj;
		Base()
		{
			cout<<"\nBase constructor";
		}
		~Base()
		{
			cout<<"\nBase destructor";
		}
};
int main()
{
Base bobj;
return 0;
}
