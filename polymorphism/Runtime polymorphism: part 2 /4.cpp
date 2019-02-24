#include<iostream>
using namespace std;
class Base2
{
	public:
		Base2()
		{
			cout<<"Base2 constructor"<<endl;
		}
		virtual ~Base2()=0;
};
Base2::~Base2()
{
	cout<<"Base2 destructor"<<endl;
	}
	class Derived2:public Base2
	{
	};
	int main()
	{
		Derived2 dobj;
		return 0;
	}
