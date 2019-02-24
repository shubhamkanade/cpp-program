#include<iostream>
using namespace std;
class Base
{
	public:
		int i;
		Base()
		{
			cout<<"base constructor"<<&i<<endl;
		}
};
class Derived:private Base
{
	public:
		Derived()
		{
			cout<<"derived constructor :"<<&i<<endl;
		}
};
int main()
{
	Derived dobj;
	return 0;
}
