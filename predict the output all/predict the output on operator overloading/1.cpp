#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i)
		{
			cout<<"first defination";
		}
		void fun(int i,int j)
		{

			cout<<"second defination";
		}
};
int main()
{
	Demo dobj;
	dobj.fun(10);
	dobj.fun(10,20);
	return 0;
}
