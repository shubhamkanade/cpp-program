#include<iostream>
using namespace std;
#include<stdio.h>
#pragma pack(1)
class base
{
	public:
		int i,j;

		virtual void fun()
		{
			cout<<"base fun\n";
		}
		virtual void gun()
		{
			cout<<"base gun\n";
		}
		virtual void sun()
		{
			cout<<"base sun\n";
		}
		void run() //object oeriented function
		{
			cout<<"base run\n";
		}
};
class derived:public base
{
	public:
		int k;
	virtual	void fun()
		{
			cout<<"derived fun\n";
		}
	virtual	void gun()
		{
			cout<<"derived gun\n";
		}
	virtual	void run() //obect oreiented funcion
		{
			cout<<"derived run\n";
		}
		virtual void mun()
		{
			cout<<"derived mun\n";
		}
};
int main()
{
base bobj;
derived dobj;

base *bp=NULL;
derived *dp=NULL;

bobj.fun();
bobj.gun();
bobj.sun();
bobj.run();
//bobj.mun();

dobj.fun();
dobj.gun();
dobj.run();
dobj.mun();

bp=&dobj;
bp->gun();
base &bref=dobj;
bref.gun();

cout<<"the size of bobj\n"<<sizeof(bobj);
cout<<"the size of dobj\n"<<sizeof(dobj);

return 0;
}






















