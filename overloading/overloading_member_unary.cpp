//#include<iostream>
using namespace std;
#include<iostream>
class demo
{
	public:
		int i,j;
		demo(int x=10,int y=20) //parameterized with default constructor
		{
			i=x;
			j=y;
		}
		demo& operator +()
		{
			cout<<"inside +operator";
			return *this;
		}
		demo operator -()
		{
			cout<<"inside - operator";
			return demo(-i,-j);//unnamed object
		}
		demo& operator ++()
		{
			cout<<"inside pre increment";
			i++;
			j++;
			return *this;
		}
		demo operator ++(int)
		{
			cout<<"inside post increment";
			 demo temp(i,j);
			i++;//caller objects contents
			j++;//caller objects contents
			return temp;
		}
};
int main()
{
	demo obj1(0,0);
	demo obj2(20,30);

		obj1=+obj2;
	//obj1=obj2.+(); here + is considered as a fuction name
	cout<<obj1.i<<obj1.j<<endl;
	demo obj3(0,0);
	demo obj4(10,20);

	obj3=-obj4;
	//obj3=obj4.-();
	cout<<obj3.i<<"\t"<<obj3.j<<endl;

	demo obj5(0,0);
	demo obj6(30,40);
	obj5=++obj6;
	//obj5=obj6.++();
	cout<<obj5.i<<"\t"<<obj5.j<<endl;

	demo obj7(0,0);
	demo obj8(70,80);
	obj7=obj8++;
	//obj7=obj8.++(); ///here ++ is considered as a name of function
	cout<<obj7.i<<"\t"<<obj7.j<<endl;
	cout<<obj8.i<<obj8.j<<endl;


	return 0;
}
