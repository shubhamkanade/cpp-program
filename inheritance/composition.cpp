// before inheritance composition is used
// illustrating composition
#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		void fun()
		{
			cout<<"\ninside fun";
		}
};
class hello
{
	public:
		int x,y;
		demo obj;
		void gun()
		{
			cout<<"\ninside gun";
		}
};
int main()
{
	demo dobj;
	hello hobj;

	cout<<sizeof(dobj)<<endl;

	cout<<sizeof(hobj)<<endl;

	dobj.i=20;
	dobj.j=30;

	hobj.x=40;
	hobj.y=11;

	hobj.obj.i=37;
	hobj.obj.j=39;

	dobj.fun();
	hobj.gun();

	hobj.obj.fun();

	return 0;
}
