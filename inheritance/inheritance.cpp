#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
		void fun()
		{
			cout<<"\ninside fun";
		}
};
class derived:public base
{
	public:int i,j;
	       void gun()
	       {
		       cout<<"\ninside gun";
	       }
};
int main()
{
	base bobj;
	derived dobj;

	cout<<sizeof(bobj)<<endl;
	cout<<sizeof(dobj)<<endl;

	bobj.x=30;
	bobj.y=29;

	dobj.i=20;
	dobj.j=21;

	dobj.x=23;
	dobj.y=34;

	bobj.fun();
	dobj.gun();
	dobj.fun();
	return 0;
}
