#include<iostream>
#define NULL 0
using namespace std;
class base1
{
	public:
		virtual void fun()=NULL;
};
class base2:public base1
{
	public:
		virtual void fun()=NULL;
};
void base1::fun()
{
	cout<<"partial defiantion of base1\n";
}
void base2::fun()
{
	cout<<"partial definton of base2\n";
	base1::fun();
}
class derived:public base2
{
	public:
		void fun()
		{
			cout<<"defination of derived class\n";
		
		base2::fun();
}
};
int main()
{
	derived dobj;
	dobj.fun();
	return 0;
}

