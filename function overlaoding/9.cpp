#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int no)
		{
		}
		void fun(int &ref)
		{
		}
};
int main()
{
	int i=11;
	demo obj;
	obj.fun(21);
	obj.fun(i);
	return 0;
}
