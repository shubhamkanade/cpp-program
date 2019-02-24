#include<stdio.h>
#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i);
		friend void fun(int i);
};
void fun(int i)
{
	cout<<"friend function\n";
}
void Demo::fun(int i)
{
	cout<<"Member function\n";
}
int main()
{
	Demo obj;
	int no=10;
	obj.fun(no);

	return 0;
}
