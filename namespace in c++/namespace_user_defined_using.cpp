#include<iostream>
using namespace std;
namespace hello
{
	int i=32;
	void fun()
	{
		cout<<"fun of hello";
	}
}
namespace demo
{
	int j=21;
	void fun()
	{
		cout<<"fun of demo";
	}
}
int main()
{
	using namespace hello;
	cout<<i;
	hello::fun();

	using namespace demo;
	cout<<i;
	demo::fun();
	return 0;
}
