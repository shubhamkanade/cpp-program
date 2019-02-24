#include<iostream>
using namespace std;
namespace 
{
	class demo
	{
		public:
			void fun()
			{
				cout<<"demo fun";
			}
	};
}
int main()
{
	demo dobj;
	dobj.fun();
	return 0;
}

