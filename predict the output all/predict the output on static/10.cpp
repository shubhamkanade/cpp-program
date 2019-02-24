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
			cout<<k;
			//cout<<i;
		}
};
int Demo::k=20;
int main()
{
	Demo::fun();
	return 0;
}
