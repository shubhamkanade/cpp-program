#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int i);
		friend void fun(int i);
};
void fun(int i)
{
	cout<<"friend function";
}
void demo::fun(int i)
{
}
int main()
{
	demo obj;
	int no=10;
	obj.fun(no);
	fun(no);
	return 0;
}
