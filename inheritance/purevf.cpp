#include<iostream>
using namespace std;
class demo
{
	public:
		int x,y;
		demo()
		{}
		virtual ~demo()=0;
		void fun()
		{}
		void gun()
		{}
};
class hello:public demo
{
	//code
};
int main()
{
//	demo dobj;
	hello hobj;;

	hobj.fun();
	return 0;
}
