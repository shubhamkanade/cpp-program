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
		Demo(int x,int y=10)
		{
			cout<<"Paramerized\n";
		}
};
int main()
{
	Demo obj1;
	Demo obj2(10,20);
	Demo obj3(10);
	return 0;
}
