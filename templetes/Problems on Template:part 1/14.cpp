#include"Header.h"
template<class T>
class Demo
{
	public:
		void fun(T no)
		{
			cout<<"Inside first fun";
		}
		void fun(T no,int x)
		{
			cout<<"Second fun";
		}
};
int main()
{

	Demo <int>obj1;
	obj1.fun(10);
	obj1.fun(10,20);
	return 0;
}
