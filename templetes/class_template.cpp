#include<iostream>
using namespace std;
template<class T> //template header
class arithematic
{
	public:
		T no1;
		T no2;
		T ans;

		void add();
		void sub();
};
	template<class T>
void arithematic<T>::add()
{
	ans=no1+no2;
}
	template<class T>
void arithematic<T>::sub()
{
	ans=no1-no2;
}
int main()
{
	arithematic <int>aobj;
	arithematic <float>aobj2;
	arithematic <double>aobj3;
	arithematic <char>aobj4;
	aobj.no1=10;
	aobj.no2=20;
	
	aobj.add();
	cout<<aobj.ans;
	aobj2.no1=11.0f;
	aobj2.no2=12.0f;

	cout<<aobj2.ans;
	return 0;
}
