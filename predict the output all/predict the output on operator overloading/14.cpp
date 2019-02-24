#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(short int i)
		{
			cout<<"first defiantion";
		}
		void fun(long int i)
		{
			cout<<"second defination";
		}
};
int main()
{
	Demo obj1;
	obj1.fun((short)10);
	obj1.fun((long)10);
	//obj1.fun(10);
	return 0;
}
