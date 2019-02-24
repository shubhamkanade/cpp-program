#include<iostream>
using namespace std;
int i=11;
class Base
{
	public:
		int i;
		Base()
		{
			i=21;
		}
		void fun()
		{
		cout<<"Inside fun\n";
		}
};
class Derived:public Base
{
	public:
		int i;
		Derived()
		{
			i=51;
			Base::fun();
			cout<<"Derived contructor"<<endl; //Derived consturctor
			cout<<i<<endl;//51
			cout<<Base::i<<endl;//21
			cout<<::i<<endl;//11
		}
		 

};
int main()
{
	Derived dobj;
	cout<<sizeof(Base);
	cout<<sizeof(Derived);

	return 0;
}
