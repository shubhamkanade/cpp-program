#include<iostream>
using namespace std;
class Hello
{
	public:
		int x,y;
};
class Demo
{
	public:
		int a,b;
};
class Base
{
	public:
		Demo dobj;
		Hello hobj;
		int no1,no2;
};
int main()
{
	Base bobj;
	cout<<"base class "<<sizeof(Base);
	return 0;
}

