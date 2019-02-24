#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void fun();
};
void Base::fun()
{
	cout<<"insdie base";
}
int main()
{
	Base bobj;
	return 0;
}
