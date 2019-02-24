#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo(int x):i(x),j(x)
	{
		cout<<"Inside Constructor";
	}
		void fun() const
		{
			//i++;;
			//j++;
		}
};
int main()
{
	Demo dobj(10);
	dobj.fun();
	cout<<dobj.i<<dobj.j<<endl;
	return 0;
}
