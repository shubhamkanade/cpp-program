#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		int j;

		void Fun()
		{
			cout<<"In fun"<<"\n";
		}
};
class Hello
{
	public:
		int x,y;
		Demo obj;

		void Gun()
		{
			cout<<"In Gun\n";
		}
};

int main()
{
	Demo dobj;
	Hello hobj;

	cout<<"Size of Demo : "<<sizeof dobj<<"\n";
	cout<<"Size of Hello : "<<sizeof hobj<<"\n";

	dobj.i=11;
	dobj.j=21;

	hobj.x=51;
	hobj.y=101;

	hobj.obj.i=121;
	hobj.obj.j=151;

	dobj.Fun();
	hobj.Gun();

	hobj.obj.Fun();
	cout<<dobj.i<<"\n";
	cout<<hobj.obj.i<<"\n";
	return 0;
}
