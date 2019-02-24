#include<iostream>
using namespace std;
class Demo
{
	public:
		int no;
		Demo()
		{
			no=10;
		}
		Demo(int x)
		{
			no=x;
		}
};
int main()
{
	Demo obj;
	cout<<obj.no<<endl;
	obj=Demo(20);
	cout<<obj.no<<endl;
	return 0;
}
