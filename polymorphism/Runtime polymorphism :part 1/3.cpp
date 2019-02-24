#include<iostream>
using namespace std;
class base
{
	public:
		void fun()
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
	((base*)dp)->fun();
	bp=&dobj;
	((derived*)bp)->fun();
	return 0;
}


