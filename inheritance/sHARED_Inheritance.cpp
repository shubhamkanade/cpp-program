#include<iostream>
using namespace std;

class A
{
	public:
		void fun()
		{
			cout<<"A fun";
		}
};
class B:public A
{
	public:
		void fun()
		{
			cout<<"B fun";
		}
};
class C:public A
{
	public:
		void fun()
		{
			cout<<"C fun";
		}
};
class D:public B,C
{
	public:
		/*void fun()
		{
			cout<<"D fun";
		}*/
};
int main()
{
D obj;
obj.fun();
return 0;
}

