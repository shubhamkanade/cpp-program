#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i)
		{
			cout<<"firt defianiton";
		}
		void fun(float f)
		{
			cout<<"second definaiton";
		}
		void fun(double d)
		{
			cout<<"third dfinaiton";
		}
};
int main()
{
	Demo obj1;
	obj1.fun(10);
	obj1.fun(10.0);
	obj1.fun(11.0f);
	return 0;
}


