#include<iostream>
using namespace std;
class Demo
{
	public:
		inline void fun(int i)
		{
			cout<<"first defianiton";
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
	obj.fun(i);
	return 0;
}
