#include<iostream>
using namespace std;
class demo
{
	public:
		int i;
		int &ref;
		demo(int x):ref(x)
	{
		i=21;
	}
};
int main()
{
	//int no=11;
	demo obj(11);
	cout<<obj.ref<<endl;
	cout<<obj.i<<endl;
	return 0;
}
