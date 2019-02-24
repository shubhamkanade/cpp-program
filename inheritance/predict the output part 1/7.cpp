#include<iostream>
using namespace std;
class Demo
{
	public:

		Demo(int i)
		{
			cout<<"\nDemo parameterized Constructor";
		}
		~Demo()
		{
			cout<<"Demo destructor";
		}
};
class Base
{
	public:
		//Demo dobj(11);
		Base(int x)
		{
			cout<<"\nBase parameterized constructor";
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
