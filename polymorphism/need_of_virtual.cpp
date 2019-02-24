#include<iostream>
using namespace std;

class base
{
	public:
		int i,j;
		void fun() //defination
		{
			cout<<"base fun\n";
		}
		void gun() //defination
		{
			cout<<"derived gun\n";
		}
};
class derived:public base
{
	public:int k;
	       void fun() //redination
	       {
		       cout<<"derived fun\n";
	       }
	       void gun() //redination
	       {
		       cout<<"derived gun\n";
	       }
};
int main()
{
	base bobj;
	derived dobj;
	cout<<sizeof(bobj);
	cout<<sizeof(dobj);
	bobj.fun();
	bobj.gun();

	dobj.fun();
	dobj.gun();

	base *bp=NULL;
	derived *dp=NULL;

	bp=&bobj;
	bp->fun();
	bp->gun();

	dp=&dobj;
	dp->fun();
	dp->gun();

	bp=&dobj; //upcasting
	bp->fun();
	bp->gun();

	//dp=(base*)&bobj; //downcasting
	dp->fun();
	dp->gun();

	base &bref=bobj; //using of refrence
	derived &dref=dobj;///using of refrence

	bref.fun();
	bref.gun();

	dref.gun();
	dref.fun();

	base &bref1=dobj;
	//derived &dref1=bobj;

	bref1.fun();
	bref1.gun();
}



























