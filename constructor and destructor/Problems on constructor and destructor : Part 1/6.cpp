#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		Demo()
		{
			cout<<"Default\n";
		}
		Demo(int x,int y)
		{
			cout<<"Parameterized\n";
		}
		Demo(int x)
		{
			cout<<"parametrized1\n";
		}
		~Demo()
		{
			cout<<"destructor\n";
		}
};
int main()
{
	Demo obj1;
	Demo obj2(10,20);
	Demo obj3(10);
	return 0;
}
