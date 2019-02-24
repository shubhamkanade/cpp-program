/*due to redefination hello class hides the defination of fun function provided
by the demo class*/
#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int i)
		{
			cout<<"demo fun";
		}
};
class hello:public demo
{
	public:
		void fun(int i,int j)
		{
			cout<<"hello fun";
		};
};
		int main()
		{
			hello hobj;
			hobj.fun(3,5);
			return 0;
		}

