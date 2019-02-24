#include<iostream>
using namespace std;
class base
{
	public:
	int i,j;
	base()
	{
		cout<<"\nbase:constructor";
	}
	~base()
	{
		cout<<"\nbase:destructor";
	}
};
class derived:public base
{
	public:
		int x,y;
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
