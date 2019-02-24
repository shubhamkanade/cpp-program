#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
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
		derived():base(15,20)
{
			x=y=0;

}
derived(int a,int b):base(a,b)
{
}

};

int main()
{
	//base obj(10,20);
	derived obj1(10,20);
	cout<<obj1.i;
	return 0;
}
