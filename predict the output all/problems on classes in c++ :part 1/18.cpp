#include<iostream>
using namespace std;
class Demo
{
	public:
		int no;
		Demo(int x)
		{
			no=x;
		}
};
int main()
{
	Demo p[3]={Demo(10),
		Demo(20),
		Demo(30),
	};
	cout<<p[0].no<<p[1].no<<p[2].no<<endl;
	return 0;
}
