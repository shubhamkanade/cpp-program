#include<iostream>
using namespace std;
#include<stdio.h>
class base
{
	public:
		int x,y;
		virtul void fun()
		{
			cout<<"\n call to fun() of base class";
		}
		virtual void gun()
		{
			cout<<"\9n call to gun() of base class";
		}
		virtual void sun()
		{
			cout<<"\n call to sun() of base class";
		}
};
class derived:public base
{
	public:
		int a,b;
		void fun()
		{
			cout<<"call to fun() of derived class";
		}
		void gun()
		{
			cout<<"call to gun() of derived class";
		}
};
int main()
{
	base bobj;
	derived dobj;

	int *pobj=(int*)(&bobj);
	int *vp=(int*)(*pobj);
	void(*fp1)();
	fp1=(void(*)())(*vp);
	fp1();
	fp1(void(*)())(*(vp+1));
	fp1();
	return 0;
}

