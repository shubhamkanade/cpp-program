#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
		//	void fun();

		virtual void fun()=0;
		{
			cout<<"base:fun";
		}
};
class derived:public base
{
	public:
		void fun()
		{
			base::fun();	
			cout<<"\nderived:fun";
		}
};
int main()
{
	//	base dobj;
	derived dobj;
	dobj.fun();
	//dobj.run();
	return 0;
}
