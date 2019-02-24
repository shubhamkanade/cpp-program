// concept of static
//in static we use objext as well as classs name
#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		static int x;
};
int demo::x=10;

int main()
{
	demo obj1;
	demo obj2;
	demo obj3;
	cout<<sizeof(obj1)<<endl; //8
	obj1.i=50;
	obj1.j=100;
	obj2.i=150;
	obj2.j=200;

	obj1.i++;
	cout<<obj1.i<<endl;
	cout<<obj2.i<<endl;

	cout<<demo::x;

	cout<<obj1.x<<endl;
	cout<<obj2.x<<endl;

	obj1.x++;
	cout<<obj1.x<<endl;
	cout<<obj2.x<<endl;
	return 0;
}
