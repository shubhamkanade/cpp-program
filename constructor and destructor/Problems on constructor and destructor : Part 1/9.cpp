#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Default\n";
		}
		Demo(int x=20,int y=10)
		{
			cout<<"Parametrized\n";
		}
};
int main()
{
	Demo obj1;
	Demo obj2(10,20);
	Demo obj3(10);
	return 0;
}
