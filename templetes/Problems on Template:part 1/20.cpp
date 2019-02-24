#include"Header.h"

class Demo1
{
	public:
		void fun()
		{
			cout<<"Fun of Demo1\n";
		}
};

class Demo2
{
	public:
		void fun()
		{

			cout<<"Fun of demo2\n";
		}
};
template<class T>
class Base
{
	public:

		T obj;
		void fun()
		{
			cout<<"Fun of base\n";
			obj.fun();
		}
};

int main()
{
	Base <Demo1>bobj1;
	bobj1.fun();
	Base <Demo2>bobj2;
	bobj2.fun();
	return 0;
}


