#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		virtual	void fun()=0;
		{
			cout<<"base fun\n";
		}
		void gun()
		{
			cout<<"base gun\n";
		}
};
class derived:public base
{
	public:
		int x,y;
		void fun()
		{
			cout<<"derived fun\n";
		}
	virtual	void run()
		{
			cout<<"derived run\n";
		}
};
int main()
{
	base bobj;
	derived dobj;

	base *bp=NULL;
	derived *dp=NULL;

	bp=&bobj; //no casting
	bp->fun();
	bp->gun();

	dp=&dobj; //no casting
	dp->fun();
	dp->run();
	dp->gun();

	bp=&dobj; //upcasting
	bp->fun();
        //bp->run();

//	dp=&bobj;
//	dp=(base*)&bobj;
	return 0;
}
