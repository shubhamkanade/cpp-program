#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo(int x,int y)
		{
			cout<<"parametrized\n";
		}
		~Demo()
		{
			cout<<"destructor\n";
		}
};
int main()
{
//	Demo obj1;
	Demo obj2(10,20);
	return 0;
}
