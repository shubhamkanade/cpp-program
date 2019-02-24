#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		demo(int x=10,int y=20)
		{
			i=x;
			j=y;
		}
		friend demo& operator +(demo&);
		friend demo& operator --(demo&);
		friend demo operator --(demo&,int);
};
demo& operator +(demo& op1)
{
	cout<<"\ninside +";
	return op1;
}
demo& operator --(demo &op1)
{
	cout<<"\ninside -";
	op1.i--;
	op1.j--;
	return op1;
}
demo operator --(demo &op1,int)
{
	cout<<"\ninside --";
	demo temp(op1.i,op1.j);
	op1.i--;
	op1.j--;
	return temp;
}
int main(void)
{
	demo obj1(0,0);
	demo obj2(10,20);

	obj1=+obj2;
	//friend is not a member of class there is this pointer concept for c++

	obj1=--obj2;

	cout<<obj1.i<<"\t"<<obj1.j;

	demo obj3(0,0);
	demo obj4(10,20);

	obj3=obj4--;
	cout<<obj3.i<<"\t"<<obj3.j;
	return 0;
}































