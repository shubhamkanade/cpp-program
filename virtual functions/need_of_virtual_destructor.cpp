#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
		char *ptr=NULL;
		base()
		{
			cout<<"\nbase:constructor";
			ptr=new char[5];
		}
		virtual ~base()
		{
			cout<<"\nbase:destructor";
			delete []ptr;
		}
};
class derived:public base
{
	public:
		int a,b;
		int *q=NULL;
		derived()
		{
			q=new int[4];
			cout<<"\nderived:consructor";
		}
		~derived()
		{
			delete []q;
			cout<<"\nderived:destructor";
		}
};
int main()
{
base *bp=NULL;
bp=new derived();

delete bp;
return 0;
}



















