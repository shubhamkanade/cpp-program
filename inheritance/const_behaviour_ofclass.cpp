#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		demo()
		{
			i=10;
			j=20;
		}
		void fun()
		{
			i++;
			j++;
		}
		void gun() const
		{
			i++;
			j++;
		}
};
int main()
{
	demo obj1;
	demo obj2;

	obj1.fun();
		cout<<obj1.i<<obj1.j<<endl;
	return 0;
}
