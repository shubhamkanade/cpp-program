#include<iostream>
using namespace std;
class hello
{
	int x;
	public:
	int y;
	protected:
	int z;
	public:
	void fun();
};
class demo
{
	int k;
	public:
		int i;
		protected:
		int j;
		//friend void hello::fun();
};
void hello::fun()
{
demo obj;
cout<<obj.k;
cout<<obj.i;
cout<<obj.j;
}
