#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int i)
		{}
		void fun(float fun)
		{}
};
int main()
{
	demo obj;
	obj.fun(4);
	obj.fun(3.14f);
	return 0;
}

