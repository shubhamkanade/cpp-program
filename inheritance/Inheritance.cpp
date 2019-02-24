#include<iostream>
using namespace std;

class Demo  //Base class
{
	public:
		int i,j;

		void Fun();
};
void Demo::Fun()
{
	cout<<"Inside fun\n";
}
class Hello:public Demo //Derived class
{
	public :
		int x,y;
		void Gun();
};
void Hello::Gun()
{
	cout<<"Inside gun\n";
}
int main()
{
	Demo dobj;
	Hello hobj;

	cout<<"Size of Demo : "<<sizeof dobj<<"\n";
	cout<<"Size of Hello : "<<sizeof hobj<<"\n";

	dobj.i=21;
	dobj.j=11;

	hobj.x=51;
	hobj.y=101;

	hobj.i=121;
	hobj.j=151;

	dobj.Fun();
	hobj.Gun();

	hobj.Fun();

	cout<<" i value is "<<hobj.i<<"\n";
	cout<<" j value is "<<hobj.j<<"\n";

	return 0;
}
