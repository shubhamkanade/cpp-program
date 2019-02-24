#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		virtual void gun()
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
		int x;
		void gun()
		{
			cout<<"derived gun\n";
		}
		void sun()
		{
			cout<<"derived sun\n";
		}
};
int main()
{
	derived dobj;

	int *p=NULL;

	p=(int *)&dobj;

	int *q=NULL;
	q=(int *)(*p);


	void(*fp)();

	fp=(void(*)())(*q);

	fp();

	fp=(void(*)())(*q+4);
	fp();


}




















