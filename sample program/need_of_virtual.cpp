#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
	 void fun()
		{
			cout<<"\nbase:fun";
		}
		void gun()
		{
			cout<<"\nbase:gun";
		}
};
class derived:public base
{
	public:
		int a,b;
		void fun()
		{
			cout<<"\nderived:fun";
		}
		void run()
		{
			cout<<"\nderived:run";
		}
		
};
int main()
{
base bobj;
derived dobj;

base *bp=NULL;
derived *dp=NULL;

bp=&bobj;//no casting
bp->fun();
bp->gun();

dp=&dobj;// no casting
dp->fun();
dp->gun();
dp->run();

bp=&dobj;
bp->fun();
bp->gun();
//bp->run();

//dp=&bobj;
//dp=(base *)&bobj;
return 0;
}




































