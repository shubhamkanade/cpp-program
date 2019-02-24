#include<iostream>
using namespace std;
class Demo
{
	public:
		Demo(int i)
		{
			cout<<"Demo parameterized constructor\n";
		}
		~Demo()
		{
			cout<<"Demo destructor\n";
		}
};
class Base
{
	public:
		Demo dobj;

		Base(int x):dobj(11)
	{
		cout<<"Base parameterized constructor\n";
	}
		~Base()
		{
			cout<<"Bse destructor\n";
		}
};
int main()
{
	Base bobj(11);
	return 0;
}
