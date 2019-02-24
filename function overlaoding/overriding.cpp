#include<iostream>
using namespace std;
class base
{
	public:
		virtual void fun()=0;
		{}
};
class derived:public base
{
//	public:
	//	void fun()
//		{}
};
int main()
{
derived dobj;
return 0;
}

