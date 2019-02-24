//function overloading-defining multiple behaviours inside class with same name with some differtiating criteria
#include<iostream>
using namespace std;
class demo //class declaration
{
	public:
		//int no1,no2,no3;
		int add(int,int);
		int add(int,int,int);

};
int demo::add(int no1,int no2)
{
	return (no1+no2);
}
int demo::add(int no1,int no2,int no3)
{
	return (no1+no2+no3);
}
int main()
{
	demo obj;
	//obj.no1=10;
	//obj.no2=20;
	//obj.no3=30;

	cout<<"the additon of two numbers"<<obj.add(10,20);
	cout<<"\nthe addition of three three numbers"<<obj.add(10,20,30);

	return 0;
}


