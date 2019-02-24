#include<iostream>
using namespace std;
class demo
{		public:
		int x,y;
		demo();
		demo(int,int);
		demo(demo&);
		~demo();
};
demo::demo()
{
	x=0;
	y=0;
}
demo::demo(int no,int no2)
{
	x=no;
	y=no2;
}
demo::demo(demo& ref)
{
	x=ref.x;
	y=ref.y;
}
demo::~demo()
{
	cout<<"\ninside destructor";
}
int main()
{
	demo obj1;
	demo obj2(7,11);
	demo obj3(obj2);
	demo obj4(6,9);
	return 0;
}
