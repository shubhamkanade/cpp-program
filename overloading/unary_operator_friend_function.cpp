// unary operator overloading using  friend function
#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;

//constructor
demo(int x=0,int y=0)//parameterized constructor with defalult arguments
{
	i=x;
	j=y;
}
demo* mythis()
{
	return this;
}
// declarations of friend functions
friend demo* operator&(demo& op1);
};
//definations of friend function
demo* operator&(demo& op1)
{
	cout<<"inside &";
	return op1.mythis();
}
int main()
{
	demo obj1(5,-6);
	demo obj2(0,0);
	cout<<"add of obj1 is"<<&(obj1);
	return 0;
}
