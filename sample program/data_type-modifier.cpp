#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(unsigned int i)
		{
		}
		void fun(signed int i)
		{}
};
int main()
{
	int a=10;
	unsigned int b=20;
	demo obj;
	obj.fun(11);
	obj.fun(a);
	obj.fun(b);
	obj.fun((unsigned)21);
	obj.fun((int)23);
	return 0;
}

