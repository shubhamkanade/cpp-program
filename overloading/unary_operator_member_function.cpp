//overloading of unary operator functions
#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		demo(int x=10,int y=20)//default value with costructor
		{
			i=x;
			j=y;
		}
		// overload + operator
		demo& operator+()
		{
			cout<<"inside +";
			return *this;
		}

		// overload -operator
		demo operator-()
		{
			cout<<"inside -";
			return demo(-i,-j);//unnamed object without creating class
		}
		//overload ~operator
		demo operator~()
		{
			cout<<"inside ~";
			return demo(~i,~j);
		}
		demo& operator++()
		{
			cout<<"pre incremented";
			i++;
			j++;
			return *this;
		}
		demo operator++(int)
		{
			cout<<"post increment";
			demo temp(i,j);//copied old values
			i++;
			j++;
			return temp;
		}
};
int main()
{
	demo obj1(5,-6);
	demo obj2(0,0);
	cout<<obj1.i<<obj1.j<<endl;
	obj2=+obj1;
	cout<<obj2.i<<obj2.j<<endl;
	demo obj5(10,20);
	demo obj6(0,0);
	obj6=obj5++;
	cout<<obj5.i<<obj5.j<<endl;
    	cout<<obj6.i<<obj6.j<<endl;
	return 0;
}
