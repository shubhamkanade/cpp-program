#include<iostream>
using namespace std;
namespace outer
{
	class demo
	{
		public:
			void fun()
			{
				cout<<"demo fun";
			}
	};
	namespace inner
	{
		class hello
		{
			public:
				void fun()
				{
					cout<<"hello fun";
				}
		};
	}
}
		int main()
		{
			outer::demo dobj;
			outer::inner::hello hobj;
			using namespace outer;
			demo dobj1;
			//hello hobj3;
			using namespace outer::inner;
			demo dobj2;
			hello hobj2;
			
			return 0;
		}
