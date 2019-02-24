#include<iostream>
using namespace std;
template <class T>
class Demo
{
	public:
		T no1,no2;
		Demo(T x,T y)
		{
			no1=x;
			no2=y;
		}
		T Add()
		{
			return no1+no2;
		}
};
int main()
{
	Demo <int>obj1(10,20);
	Demo <char>obj2('a','b');
	Demo <double>obj3(3.02,5.01);
	cout<<sizeof(obj1)<<endl;
	cout<<sizeof(obj2)<<endl;
	cout<<sizeof(obj3)<<endl;
	return 0;
}

