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
		friend demo operator +(demo&,demo&);
		friend demo operator <<(demo&,demo&);
		friend int operator ==(demo&,demo&);
};
demo operator +(demo &op1,demo &op2)
{
	return demo(op1.i+op2.i,op1.j+op2.j);
}
demo operator <<(demo& op1,demo& op2)
{
	return demo(op1.i<<op2.j,op1.i<<op2.j); ///returning unamed object and return value is demo
}
int operator ==(demo &op1,demo &op2)
{
	return ((op1.i==op2.i)&&(op1.j==op2.j));
}
int main(void)
{
	demo obj3(0,0);
	demo obj1(10,20);
	demo obj2(5,6);

	obj3=obj1+obj2;
	//obj3=+(obj1,obj2);
	
	obj3=obj1<<obj2;
	//obj3=<<(obj1,obj2);


	if(obj1==obj2)
	{
		cout<<"euals";
	}
	else
	{
		cout<<"not equal";
	}
	return 0;
}























