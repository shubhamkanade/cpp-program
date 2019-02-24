#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		virtual void fun()
		{
			cout<<"base:fun";
		}
		virtual void gun()
		{
			cout<<"base:gun";
		}
};
class derived:public base
{
	public:
		void fun()
		{
			cout<<"derived fun";
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

	base *bp=NULL;
	bp=&dobj;
	int *p=(int *)&dobj;
	int *q=(int *)(*p);
	void(*fp)();
	fp=(void(*)())(*(q+0));

	fp();

	fp=(void(*)())(*(q+1));

	fp();
	return 0;
}













































































