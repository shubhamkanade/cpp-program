#include<iostream>
using namespace std;
class demo
{
	public:
		int x,y;
		void gun()
		{
			cout<<"\ninside gun";
		}
};
class hello
{
	public:
		int i,j;
		demo obj;
		void sun()
		{
			cout<<"\ninside sun";
		}
};
int main()
{
	demo dobj;
	hello hobj;

	cout<<sizeof(dobj);
	cout<<"\t";
	cout<<sizeof(hobj);

	dobj.x=11;
	dobj.y=21;

	hobj.i=51;
	hobj.j=101;


	hobj.obj.x=71;
	hobj.obj.y=40;

	dobj.gun();
	hobj.sun();


	hobj.obj.gun();



	return 0;
}






















