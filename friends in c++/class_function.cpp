#include<iostream>
using namespace  std;
class hello
{
	public:int x,y;
	void run();
	void gun();
};
class demo
{
	int i;
	public:
	int j;
	protected:
	int k;
	public:
	void mun();
	friend class hello;
};
void hello:: run()
{
	demo obj;
	cout<<obj.i<<obj.j<<obj.k;
}
void hello::gun()
{
	demo obj;
	cout<<obj.i<<obj.j<<obj.k;
}
