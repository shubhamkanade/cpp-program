#include<iostream>
using namespace std;
class Base
{
	public:
	int i,j;
	Base()
	{
		i=10;
		j=20;
	}
	void fun()
	{
		cout<<"Base fun\n";
	}
};
class Derived:public Base
{
	public:
		int i,j;
		Derived(int x,int y)
		{
			i=x;
			j=y;
		}
		void gun()
		{
			cout<<"Derived gun" <<i <<j<<"\n";
			cout<<"DErived gun"<<Base::i<<Base::j;
		}
};
int main()
{
	Base bobj;
	Derived dobj(11,21);
	bobj.fun();
	dobj.gun();
	return 0;
}

