#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		base(int no1,int no2)//parameried consrtuctor
		{
			i=no1;
			j=no2;
		}
};
class derived:public base
{
	public:
		int x,y;
		derived():base(10,20)//default constructor
	{
		x=y=0;
	}
	/*	derived(int no1,int no2)
		{
			x=no1;
			y=no2;
		}*/
};
		int main()
		{
	//		base bobj(10,20);
			derived dobj;
			return 0;
		}
