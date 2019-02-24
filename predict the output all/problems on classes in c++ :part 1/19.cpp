#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo(int x)
		{
			i=j=x;
		}
		Demo(int x,int y)
		{
			i=x;
			j=y;
		}
};
int main()
{
	Demo p[3]={10,20,Demo(30,40)};
	cout<<p[0].i<<p[0].j<<endl;cout<<p[1].i<<p[1].j<<endl;
	cout<<p[2].i<<p[2].j<<endl;
	return 0;
}
