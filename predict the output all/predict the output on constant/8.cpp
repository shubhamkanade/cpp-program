#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo(int x):i(x),j(x)
	{
		cout<<"Inside onstructor ";
	}
		void fun(const int no)
		{
			j++;
			//no++;
		}};
int main()
{
	Demo dobj(10);
	int x=10;
	dobj.fun(x);
	return 0;
}

