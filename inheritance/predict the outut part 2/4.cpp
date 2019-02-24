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
};
class Derived:public Base
{
	public:
		using Base::k;
};
int main()
{
	Derived dobj;
	cout<<dobj.k;
	return 0;
}
