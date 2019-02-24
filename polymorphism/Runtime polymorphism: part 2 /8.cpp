#include<iostream>
using namespace std;
class base
{
	public:
		virtual void fun()=0;
};
void base::fun()
{
	cout<<"inside partial defination\n";
}
class derived:public base
{
	public:
		void fun()
		{
			cout<<"defination of derived\n";
		
		base::fun();
}
};
int main()
{
	derived dobj;
	dobj.fun();
	return 0;
}
