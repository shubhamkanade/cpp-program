#include<iostream>
using namespace std;
class comparison
{
	public://access specifier
		int no1,no2,no3;//characteristics
	private:
		int ians;
	public:// behavoiurs
		void accept();
		void display();
		void minimum();
		void maximum();
};
//definations of all behaviour
void comparison::accept()
{
	cout<<"enter the nos";
	cin>>no1>>no2>>no3;
}
void comparison::display()
{
	cout<<"the elements are"<<ians;
}
void comparison::maximum()
{
	if((no1>no2)&&(no1>no3))
	{
		ians=no1;
	}
	else if((no2>no1)&&(no2>no3))
	{
		ians=no2;
	}
	else
	{
		ians=no3;
	}
}
void comparison::minimum()
{
	if((no1<no2)&&(no1<no3))
	{
		ians=no1;
	}
	else if((no2<no1)&&(no2<no3))
	{
		ians=no2;
	}
	else
	{
		ians=no3;
	}
}
int main()
{
	comparison obj1;
	comparison obj2;

	obj1.accept();//internally is accept(&obj1)
	obj1.maximum();
	obj1.display();

	obj2.accept();
	obj2.maximum();
	obj2.display();
	obj2.minimum();
	obj2.display();


	cout<<obj1.no1;
//	cout<<obj1.ians;
	return 0;
}






























































