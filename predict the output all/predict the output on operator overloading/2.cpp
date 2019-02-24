#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(const int i)
		{
			cout<<"first defination";
		}
		void fun(int j)
		{
			cout<<"second defination";
		}
};
int main()
{
	Demo obj;
	int i=10;
	const int j=20;
	obj.fun(i);
	obj.fun(j);
	return 0;
}
