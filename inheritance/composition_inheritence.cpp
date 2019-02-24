#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		void gun()
		{
			cout<<"\ninside gun";
		}
};
class hello:public demo
{
	public:
		int x,y;
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



	cout<<sizeof(hobj);

	dobj.i=21;   //intiallizing members becoz there is no consrtuctor for initialization 
	dobj.j=51;

	hobj.x=31;
	hobj.y=41;

	hobj.i=51;

	dobj.gun();
	hobj.sun();

	hobj.gun();


return 0;
}












