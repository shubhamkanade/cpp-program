#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int i)
		{
			//
		}
		void fun(float f)
		{
		}
};
int main()
{
	demo obj;
	cout<<obj.fun(10);
	cout<<obj.fun(3.14f);
	return 0;
}

