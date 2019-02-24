#include<iostream>
using namespace std;
class Demo
{
	public:
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
