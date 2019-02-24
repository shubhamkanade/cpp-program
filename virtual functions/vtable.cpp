#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		void fun()
		{
			cout<<"base fun\n";
		}
		virtual void gun(int i)
		{
			cout<<"base gun\n";
		}
		virtual void sun()
		{
			cout<<"base sun\n";
		}
};
class derived:public base
{
	public:
		int x,y;
		void gun()
		{
			cout<<"derived gun\n";
		}
		virtual void run()
		{
			cout<<"derived run\n";
		}
};

int main()
{
	base bobj;
	derived dobj;

	base *bp=&dobj; //upcasting

	bp->fun();
	bp->gun(11);
	bp->sun();
	//bp->run();

	int *p=NULL;
	p=(int*)&dobj;

	int*q=NULL;

	q=(int *)(*p);

	void (*fp)(int);
	fp=(void(*)(int))(*q);  ///fetch the address of first function from v-table

fp(11);
void (*fp1)();
fp1=(void(*)())(*(q+8));
fp1();

return 0;
}

















































