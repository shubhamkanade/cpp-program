#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i) const 
		{
			cout<<"first defiantion";
		}
		void fun(int j)
		{
			cout<<"second defiantion";
		}
};
int main()
{
	const Demo obj;
	Demo obj1;
	int i=10;
	obj.fun(i);
	obj1.fun(i);
	return 0;
}
