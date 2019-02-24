#include<iostream>
using namespace std;
namespace demo
{
	int i=11;
	void fun()
	{
		cout<<"\ninside fun";
	}
}
namespace hello
{
	int i=21;
	void fun()
	{
		cout<<"\ninside fun2";
	}
}
int main()
{
	demo::fun();
	hello::fun();

	cout<<endl<<demo::i;
	cout<<hello::i<<endl;
	return 0;
}
