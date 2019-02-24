#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		//	base()
		//	{
		//}
		base(int no1,int no2)
		{
			i=no1;
			j=no2;
		}
};
class derived:public base
{
	public:
		int x,y;
		derived():base(10,20)
	{
		x=y=0;
	}
		derived(int no1,int no2):base(no1,no2)
		{
			x=y=0;
		}
};
int main()
{
	base obj(10,20);	
	derived dobj();
	return 0;
}
