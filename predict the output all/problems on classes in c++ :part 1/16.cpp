#include<iostream>
using namespace std;
int no=10;
void fun()
{
	cout<<"Inside global fun"<<endl;
}
class Demo
{
	public:
		int no;
		Demo()
		{
			no=::no;
		}
		void fun()
		{
			cout<<"Inside Demo Fun"<<endl;
			::fun();
		}
};
int main()
{
	Demo obj;
	cout<<obj.no<<endl;
	obj.fun();
	return 0;
}
