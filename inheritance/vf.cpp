#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
		virtual void fun()
		{
			cout<<"base fun";
		}
		virtual void gun()
		{
			cout<<"base gun";
		}
		void run()
		{
			cout<<"inside run";
		}
};
class derived:public base
{
	public:int i,j;
	       void fun()
	       {
		       cout<<"derived fun";
	       }
	       void run()
	       {
		       cout<<"derived run";
	       }
	       virtual void sun()
	       {
		       cout<<"derived sun";
	       }
};
int main()
{
	base bobj;
	derived dobj;

	cout<<sizeof(bobj);
	cout<<sizeof(dobj);
	base *bp=NULL;
	bp=&dobj;
	bp->fun();
	bp->sun();
	return 0;
}
