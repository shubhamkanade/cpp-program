#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		int j;
		const int fun(Demo *p)const
		{
			return p->i;
		}
};
int main()
{
	const Demo obj={10,20};
	const int no;
	no=obj.fun((Demo*)&obj);
	cout<<obj.i<<obj.j<<no<<endl;
return 0;
}

