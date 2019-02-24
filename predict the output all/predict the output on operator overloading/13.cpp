#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i,float f)
		{
			cout<<"first defination";
		}
		void fun(float f,int i)
		{
			cout<<"second defiantion";
		}
};
int main()
{
	Demo obj1;
	obj1.fun(10,10);
	obj1.fun(10.2f,10.2f);
	return 0;
}
