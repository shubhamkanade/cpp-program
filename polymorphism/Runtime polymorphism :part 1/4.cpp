#include<iostream>
using namespace std;
class base
{
	public:
		virtual void fun()
		{
			cout<<"fun of base\n";
		}
};
class derived:public base
{
	public:
		void fun()
		{
			cout<<"fun of derived\n";
		}
};
int main()
{
	base bobj;
	derived dobj;
	base *bp;
	bp=&bobj;
	bp->fun();
	derived *dp;
	dp=&dobj;
	dp->fun();
	bp=&dobj;
	bp->fun();
	return 0;
}
