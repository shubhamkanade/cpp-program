#include<stdio.h>
#include<iostream>
using namespace std;
class Base
{
	public:
		void gun()
		{
			printf("Base gun\n");
		}
};
class Derived:public Base
{
	public:
		void gun()
		{
			printf("Derived gun\n");
		}
};
int main()
{
	Base bobj;
	Derived dobj;
	Base *bp;
	bp=&bobj;
	bp->gun();
	Derived *dp;
	dp=&dobj;
	dp->gun();
	((Base*)dp)->gun();
	//Base *bp;
	bp=&dobj;
	((Derived*)bp)->gun();
	return 0;
}

