#include<iostream>
using namespace std;
class Demo
{
	public:
		Demo()
		{
			cout<<"Default\n";
		}
		Demo(int x,int y)
		{
			cout<<"Paramerized\n";
		}
		Demo(int x)
		{
			cout<<"parametrized1";
		}
};
int main()
{
	Demo obj1;
	Demo obj2(10,20);
	Demo obj3(10);
	return 0;
}
