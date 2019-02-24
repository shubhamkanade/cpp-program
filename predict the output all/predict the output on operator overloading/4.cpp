#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(signed int i)
		{
			cout<<"first defination";
		}
		void fun(unsigned int j)
		{
			cout<<"second defination";
		}
};
int main()
{
	Demo obj;
	int i=10;
	unsigned int j=11;
	obj.fun(i);
	obj.fun(j);
	return 0;
}
