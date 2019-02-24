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
	cout<<"\t"<<sizeof(demo);

	obj1.i=50;
	obj1.j=100;
	obj2.i=150;
	obj2.j=200;

	obj1.i++;
	obj1.j++;

	cout<<"\t " <<obj1.i;
	cout<<"\t " <<obj1.j;

	cout<<demo::x;

	cout<<"\t"<<obj2.i;
	cout<<"\t"<<obj2.j;

	obj1.x++;

	cout<<"\t"<<obj2.x;
	cout<<"\t"<<obj1.x;
return 0;

}

