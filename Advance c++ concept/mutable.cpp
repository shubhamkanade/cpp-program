#include<iostream>
#include<stdio.h>
//#include<cstdlib.h>
//#include<typeinfo>
using namespace std;
class hello
{
	public:
		mutable int i;
		int j;
		void fun()
		{
			printf("inside fun");
		}
		void gun()
		{
			printf("isndie gun");
		}
};
int main()
{
	const hello hobj;
	hobj.i++;
	hobj.j++;
	return 0;
}
