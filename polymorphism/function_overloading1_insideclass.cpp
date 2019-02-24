//redefination-defining multiple behaviour across the classes 
#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int i)
		{
			cout<<"inside  fun";
		}
};
class derived:demo
{
	public:
		void fun(int i,int j)
		{
			cout<<"isndie fun";
		}
};
int main()
{
	demo obj;
	derived obj1;
	obj.fun(10);
	obj1.fun(10,20);
	return 0;
}

