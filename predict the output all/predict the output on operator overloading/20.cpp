#include<iostream>
using namespace std;
//int main();
class Demo
{
	public:
		virtual void fun(int i)
		{
			cout<<"Virtual function\n";
		}
		void fun(int i)
		{
			cout<<"non virtual function\n";
		}
};
int main()
{

	Demo obj;
	int no=10;
	obj.fun(no);
	return 0;
}
