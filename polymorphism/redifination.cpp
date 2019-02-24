#include<iostream>
using namespace std;
class Base
{
	public:
		int x,y;
		void fun()
		{
			cout<<"Base fun\n";
		}
		virtual void gun()=0;

};
class Derived:public Base
{
	public:
		int i,j;
		void gun()
		{
			cout<<"Derived gun\n";
		}
		void sun()
		{
			cout<<"Derived gun\n";
		}
};
int main()
{
	///Base bobj;
	Derived dobj;
	cout<<sizeof(dobj)<<" ";
	Base *bobj;
}
