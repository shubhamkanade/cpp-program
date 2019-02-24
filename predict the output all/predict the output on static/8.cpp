#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		static int k;
		Demo()
		{
			i=10;
		}
};
int Demo::k=20;
int main()
{
	Demo dobj;
	cout<<dobj.k<<Demo::k<<endl;
	return 0;
}
