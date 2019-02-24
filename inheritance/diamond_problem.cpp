#include<iostream>
using namespace std;
class base
{
	public:
		void fun()
		{
			cout<<"Base fun\n";
		}
};
class derived1:virtual public base
{
	public:
		void fun()
		{
			cout<<"derived1 fun\n";
		}

};
class derived2:virtual public base
{
	public:
		void fun()
		{
			cout<<"derived2 fun\n";
		}

};
class demo:public derived1,derived2
{
	public:
};
int main()
{
	demo obj;
	obj.fun();
	return 0;
}
