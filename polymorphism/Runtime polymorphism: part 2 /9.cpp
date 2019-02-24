#include<iostream>
#define NULL 0
using namespace std;
class base1
{
	public:
		virtual void fun()=NULL;
};
class base2
{public:
	virtual void fun()=NULL;
};
void base1::fun()
{
	cout<<"partial defination base1 fun\n";
}
void base2::fun()
{
	cout<<"partial defination base2 fun\n";
}
class derived:public base1,public base2
{
	public:
		void fun()
		{
			base1::fun();
			cout<<"defination of derived class\n";
			base2::fun();
		}
};
int main()
{
	derived obj;
	obj.fun();
	return 0;
}
