#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
		void fun()
		{
			cout<<"base fun\n";
		}
		virtual void gun()=0;
};
class derived:public base
{
	public:
		int i,j;
		void gun()
		{
			cout<<"inside gun\n";
		}
		void sun()
		{
			cout<<"inside sun\n";
		}
};
int main()
{
	base bobj;
	derived dobj;

	base *bp=NULL;
	derived *dp=NULL;

	dobj.gun();
	dobj.fun();
	dobj.sun();
	cout<<sizeof(bobj);
	cout<<sizeof(dobj);

	return 0;
}

