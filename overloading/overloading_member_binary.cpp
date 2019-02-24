#include<stdio.h>
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
		demo operator +(demo &op2)
		{
			cout<<"inside +";//for binary we have to pass one as implict and other one is explicit
			return demo((*this).i+op2.i,(*this).j+op2.j); //unnamed object
		}
		demo operator <<(demo &op2) //unnamed object
		{
			return demo(this->i<<op2.i,this->j<<op2.j);
		}
		int operator ==(demo &op2);
		//{
		//	return (this->i==op2.i,this->j==op2.j);
		//}
};
//object oriented function
int demo::operator ==(demo &op2)
{
return (this->i==op2.i,this->j==op2.j);
}
int main()
{
	demo obj3(0,0);
	demo obj1(10,20);
	demo obj2(5,6);

	obj3=obj1+obj2;//internallly calls becomes
	//obj3=obj1.+(obj2);
	//obj3=+(&obj1,obj2);//here obj1 will go implicitely and that pointer is called as this pointer which is hidden
	printf("%d %d",obj3.i,obj3.j);
	obj3=obj1<<obj2;
	//obj3=obj1.<<(obj2);

	if(obj1==obj2)
	{
		printf("equal");
	}
	else
	{
		printf("\nnot equal");
	}
	return 0;
}
