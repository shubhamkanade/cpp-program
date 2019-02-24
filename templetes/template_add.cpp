#include<iostream>
using namespace std;
template <class T>
class arithematic
{
	public:
		T no1,no2,ans;

		void add();
		void sub();
};
template <class T>
void arithematic<T>:: add()
{
	ans=no1+no2;
}
template <class T>
void arithematic<T>::sub()
{
	ans=no1-no2;
}
int main()
{
	arithematic <int>obj1;
	arithematic <float>obj2;
	arithematic <double>obj3;
	obj1.no1=20;
	obj1.no2=30;
	obj1.add();
	cout<<obj1.ans;
	//cout<<obj1.ans;
	//cout<<obj1.add();
	obj2.no1=11.0;
	obj2.no2=10.0;
	obj2.add();
	cout<<obj2.ans;
	return 0;
}

