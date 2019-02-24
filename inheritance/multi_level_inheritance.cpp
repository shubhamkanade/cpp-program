#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		base()
		{
			cout<<"base:constructor";
		}
		~base()
		{
			cout<<"\nbase:destructor";
		}
};
class derived1:public base
{
	public:
		int x,y;
		derived1()
		{
			cout<<"\nderived1:constructor";
		}
		~derived1()
		{
			cout<<"\nderived1:destructor";
		}
};
class derived2:public derived1
{
	public:
		int a,b;
		derived2()
		{
			cout<<"\nderived2:constructor";
		}
		~derived2()
		{
			cout<<"\nderived2:destructor";
		}
};
int main()
{
	derived2 dobj;
	return 0;
}

