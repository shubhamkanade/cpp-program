#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		static int k;
		Demo()
		{
			i=10;
			j=20;
		}
};
int Demo::k=21;
int main()
{
	Demo dobj;
	cout<<sizeof(dobj)<<endl;
	return 0;
}
