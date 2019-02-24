#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int p)
		{
			cout<<"first defiantin";
		}
		void fun(int &p)
		{
			cout<<"second defiantion";
		}
};
int main()
{
	Demo obj;
	int no=10;
	obj.fun(no);
	return 0;
}
