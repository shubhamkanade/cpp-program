#include<iostream>
using namespace std;
class Demo
{
	public:
		const int i;
		int j;
		Demo():i(10)
	{
		j=20;
	}
		void fun(Demo &ref)const
		{
			ref.j++;
		}
};
int main()
{
	const Demo obj1;
	obj1.fun((Demo&)obj1);
	cout<<obj1.j<<endl;
	return 0;
}
