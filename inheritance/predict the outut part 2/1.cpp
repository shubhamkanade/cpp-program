#include<iostream>
using namespace std;
class Base
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	public:
		Base()
		{
			i=j=k=11;
		}
		void gun()
		{
			cout<<i<<endl;
			cout<<j<<endl;
			cout<<k<<endl;
		}
};
class Derived:public Base
{
	public:
		void fun()
		{
			cout<<i<<endl;
			//cout<<j<<endl;
			cout<<k<<endl;
		}
};
int main()
{
	Derived dobj;
	dobj.fun();
	Base bobj;
	bobj.gun();;
	cout<<bobj.i;
	//cout<<bobj.j;
	//cout<<bobj.k;
	cout<<dobj.i;
	//cout<<dobj.j;
	//cout<<dobj.k;
	return 0;;
}
