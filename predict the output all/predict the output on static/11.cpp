#include<stdio.h>
#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		static int k;
		Demo()
		{
			i=10;
		}
		static void fun()
		{
			cout<<++k;
			k=31;
		}
};
int Demo::k=20;
int main()
{
	Demo dobj;
	dobj.fun();
	cout<<dobj.k<<endl;
	return 0;
}
