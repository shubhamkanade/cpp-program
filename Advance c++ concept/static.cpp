#include<iostream>
using namespace std;
class demo
{
	public:
		int i;
		static int j;
		void fun()
		{
			this->i=0;
			cout<<i<<endl;
			cout<<j<<endl;
		}
		static void  gun()
		{
			//this->i=0;
			//cout<<i<<endl;
			cout<<j<<endl;
		}
};
int demo::j=10;

int main()
{
	//demo::fun();
	demo::gun();
	//cout<<demo::i;
	cout<<demo::j;
	demo obj;
obj.fun();
obj.gun();
cout<<obj.i;
cout<<obj.j;
cout<<demo::i;
















return 0;
}
