#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int i)
		{
			cout<<"\ninside fun";
		}
		void fun(float f)
		{
			cout<<"\ninside fun";
		}
}obj,obj1;

int main()
{
	obj.fun(10);
	obj.fun(3.14f);
	obj1.fun(20);
	obj1.fun(20.4f);
	return 0;
}

