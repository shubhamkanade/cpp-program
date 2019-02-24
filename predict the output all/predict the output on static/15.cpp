#include<iostream>
using namespace std;
class Base
{
	public:
		static int i;
		int j;
		static void fun()
		{
			cout<<this->i<endl;
		}
		void gun()
		{
			cout<<this->j<<endl;
		}
};
int Base::i=21;
int main()
{
	Base bobj;
	bobj.fun();
	bobj.gun();
	return 0;
}
