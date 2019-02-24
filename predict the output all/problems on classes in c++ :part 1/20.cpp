#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		Demo(int x)
		{
			i=x;
		}
		class Hello
		{
			public:
				int i;
				Hello()
				{
					
					i=obj1.i;
				}
		}obj;
}obj1(11);
int main()
{
	cout<<obj1.i<<obj1.obj.i;
	return 0;
}
