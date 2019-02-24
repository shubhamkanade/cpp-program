#include<iostream>
using namespace std;
static int i=0;
class Outer
{
	public:
		static int i;
		static void fun()
		{
			++i;
			++::i;
			++Inner::i;
		}
		class Inner
		{
			public:
				static int i;
				static void fun()
				{
					++i;
					++::i;
					++Outer::i;
				}
		}obj;
}obj;
int Outer::i=10;
int Outer::Inner::i=20;
int main()
{
	Outer::fun();
	Outer::fun();
	Outer::Inner::fun();
	Outer::Inner::fun();
	Outer::fun();
	cout<<i<<endl;
	cout<<obj.i<<endl;
	cout<<obj.obj.i<<endl;
	return 0;
}

