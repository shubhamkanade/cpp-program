#include<iostream>
using namespace std;
class demo
{
	public:
		int x,y;
		demo()
		{
			cout<<"\ninside default";
		}
		demo(int a)
		{
			x=a;
			y=a;
		}
		demo(int a,int b)
		{
			x=a;
			y=b;
		}
		demo(demo &ref)
		{
			x=ref.x;
			y=ref.y;
		}
		~demo()
		{
			cout<<"\ninside destructor";
		};
};
int main()
{
	demo obj;
	demo obj1(3);
	demo obj2(4,6);
	demo obj3(obj);
	return 0;
}

