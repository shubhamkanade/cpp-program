#include"Header.h"
using namespace std;

template<class T>
class Base
{
	public:
		T i,j;

		void fun(T no)
		{
			cout<<"Base fun"<<endl;
		}
};
template<class A>
class Derived:public Base<A>
{
	public:
		void fun()
		{
			cout<<"Derived fun";
		}
};
int main()
{
	Derived <int>dobj;
	dobj.fun();
	return 0;
}



