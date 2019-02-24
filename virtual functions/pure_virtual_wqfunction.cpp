#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
		void fun()
		{
			cout<<"\nbase:fun";
		}
		virtual void gun()=0;
};
class derived:public base
{
	public:
		int i,j;
		void gun()
		{
			cout<<"\nderived:gun";
		}
		void run()
		{
			cout<<"\nderived:sun";
		}
};
int main()
{
//base bobj;
derived dobj;
base *bp=NULL;
derived *dp=NULL;

dobj.fun();
dobj.gun();
dobj.run();

cout<<endl<<sizeof(dobj);
//cout<<sizeof(bobj)<<endl;
return 0;
}
