#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo(int x):i(x),j(x)
	{
		cout<<"inside constructor";
	}
		void fun() const 
		{
			cout<<"inside fun"<<endl;
		}
		void gun()
		{
			cout<<"inside gun"<<endl;
		}
};
int main()
{
	const Demo obj1(10);
	obj1.fun();
	//obj1.gun();
	return 0;
}
