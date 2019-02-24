#include<iostream>
using namespace std;
class Base
{
	public:
		int i,j;
		Base()
		{
			i=10;
			j=20;
		}
};
class Derived:public Base
{
	public:
		int k;
		Derived()
		{
			k=30;
		}
};
int main()
{
	Base bobj;
	Derived dobj;
	dobj.i=11;
	dobj.j=21;
	dobj.k=51;
	bobj=dobj;
	cout<<bobj.i<<bobj.j<<endl;
	return 0;
}
