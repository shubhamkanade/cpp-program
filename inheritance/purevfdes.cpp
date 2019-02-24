#include<iostream>
using namespace std;
class base
{
	public:
		int x,y;
		int *ptr;
		base()
		{
			cout<<"inside base";
			ptr=new int[5];
		}
		~base()
		{
			cout<<"base destructor;
			delete []ptr;
		}
};
class derived:public base
{
	public:
		int i,j;
		char *q;
		derived()
		{
			cout<<"derived constructor";
			q=new char[5];
		}
		~derived()
		{
			delete []q;
		}
};
int main()
{
base *bp=NULL;
bp=new derived();
//bp=&obj;
delete bp;
return 0;
}

