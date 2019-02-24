#include<iostream>
using namespace std;
class Base
{
	public:
		int x,y;
		virtual void fun()
		{
			cout<<"fun() of base\n";
		}
		void gun()
		{
			cout<<"gun() of base\n";
			int *pobj=(int*)(this);
			int *vp=(int*)(*pobj);
			void(*fp1)();
			fp1=(void(*)())(*vp);
			fp1();
			fp1=(void(*)())(*(vp+2));
			fp1();
		}
		virtual void sun()
		{
			cout<<"sun() of base\n";
		}

};
int main()
{
	Base bobj;
	bobj.gun();
	return 0;
}
