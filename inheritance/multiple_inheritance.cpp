#include<iostream>
using namespace std;
class base1
{
	public:
		int i,j;
		base1()
		{
			cout<<"\nbase1:constructor";
		}
		~base1()
		{
			cout<<"\nbase1:destructor";
		}
};
class base2
{
	public:
		int x,y;
		base2()
		{
			cout<<"base2:constructor";
		}
		~base2()
		{
			cout<<"\nbase2:destructor";
		}
};
class derived:public base2,public base1
{
	private:base1::i;

public:
		

		int a,b;
		derived()
		{
			cout<<"\nderived:consrtuctor";
		}
		~derived()
		{
			cout<<"\nderived:destructor";
		}
};
int main()
{
	derived dobj;
	return 0;
}

