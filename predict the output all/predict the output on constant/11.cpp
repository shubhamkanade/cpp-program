#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo(int x):i(x),j(x)
	{
		cout<<"inside constructor\n";
	}

		void fun() const
		{
			cout<<"insdie fun\n";
		}
		void gun() 
		{
			cout<"inside gun\n";
		}
};
int main()
{
	Demo obj1(10);
	obj1.fun();
	obj1.gun();
	return 0;
}
