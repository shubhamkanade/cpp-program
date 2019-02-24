#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int *p)
		{
			cout<<"first defiantion";
		}
		void fun(double *p)
		{
			cout<<"second defiantion";
		}
		void fun(char *p)
		{
			cout<<"third definaiton";
		}
};
int main()
{
	Demo obj;
	int no=10;
	double d=10.0;
	char ch='a';
	obj.fun(&no);
	obj.fun(&d);
	obj.fun(&ch);
	return 0;
}
