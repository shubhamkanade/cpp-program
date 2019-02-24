#include<iostream>
using namespace std;
class Demo
{
	public:
		const int i;
		int j;
		Demo(int x):i(++x),j(x=12)
	{
		cout<<"inside constructor";
	}
};
int main()
{
	Demo dobj(10);
	cout<<dobj.i<<dobj.j<<endl;
	return 0;
}
