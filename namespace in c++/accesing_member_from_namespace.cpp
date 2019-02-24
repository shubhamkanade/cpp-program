#include<iostream>
using namespace std;
namespace outer
{
	class hello
	{
	};
	namespace inner
	{
		class demo
		{
			void fun();
			
		};
	}
}
void outer::inner::demo::fun()
{
cout<<"inside fun";
}
