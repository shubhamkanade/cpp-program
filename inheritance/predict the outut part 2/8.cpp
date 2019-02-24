#include<iostream>
using namespace std;
class Base
{
	public:
		int i;
		void fun()
		{
			cout<<"From base fun"<<&i<<endl;
		}
};
class Derived:private Base
{
		public:
		int i;
		Derived()
		{
			cout<<"Derived constructor"<<&i<<endl;
			Base::fun();
		}
};
int main()
{
	Derived dobj;
	return 0;
}
