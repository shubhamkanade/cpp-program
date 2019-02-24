#include<iostream>
using namespace std;
class base
{
	public:
		int *ptr;
		int i,j;
		base()
		{
			cout<<"base:constructor\n";
			ptr=new int[5];
		}
		~base()
		{
			cout<<"base:destructor\n";
			delete []ptr;
		}
};
class derived:public base
{
	public:
		int i,j;
		char *ptr;
		derived()
		{
			cout<<"derived:constructor\n";
			ptr=new char[5];
		}
		~derived()
		{
			cout<<"derived:destructor\n";
			delete []ptr;
		}
};
		int main()
		{
			base *bp=NULL;
			bp=new derived();

			delete bp;
			return 0;
		}
