#include<iostream>
using namespace std;
class demo
{
	void fun();
	void gun();
};
class hello
{
	private:int x;
	protected:int y;
	public:int z;
friend void fun();
};
void fun()
{
	hello hobj;
		cout<<hobj.y;
}
