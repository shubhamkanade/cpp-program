#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		int j;
		void fun(Demo *p)const
		{
			p->i=11;
			p->j=21;
		}
};
int main()
{
	const Demo obj={10,20};
	cout<<obj.i<<obj.j<<endl;
	obj.fun((Demo*)&obj);
	cout<<obj.i<<obj.j<<endl;
	return 0;
}

