#include<iostream>
#define NULL 0
using namespace std;
class base1
{
	public:
		virtual void fun(int i)=NULL;
};
class base2
{
	public:
		virtual void fun()=NULL;
};
void base1::fun(int i)
{
	cout<<"partial defination of base1\n";
}
void base2::fun()
{
	cout<<"partial defiantion of base2\n";
}
class derived:public base1,public base2
{
	public:
		void fun()
		{
			base1::fun(11);
			cout<<"defived fun\n";
		}
};
int main()
{
	derived obj;
	obj.fun(11);
	return 0;
}

