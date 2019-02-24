#include<iostream>
using namespace std;
class demo
{
	public:
		void fun(int no)
		{}
		void fun(int&ref){}
};
int main()
{
	int no=11;
	demo dobj;
	dobj.fun(21);
	dobj.fun(no);
	return 0;
}

