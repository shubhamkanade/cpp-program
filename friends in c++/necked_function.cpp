#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
	int y;
	protected:
	int z;
	void fun();
	friend void gun();
}
void gun()
{
	demo obj;
	cout<<obj.x;
	cout<<obj.y;
	cout<<obj.z;
}
