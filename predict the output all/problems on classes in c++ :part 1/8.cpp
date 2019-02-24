#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun()
		{
			cout<<"inside fun"<<endl;
		}
};
int main()
{
	Demo obj;
	Demo *p=&obj;
	obj.fun();
	p->fun();
	(&obj)->fun();
	(*p).fun();
	return 0;
}
