#include<iostream>
using namespace std;
class Demo
{
	public:
		mutable int i;
		int j;
		void fun() const;
		Demo();
		/*void fun() const
		{
			i++;
			//j++;
		}*/
};
Demo::Demo()
{
	i=10;
	j=20;
}
void Demo::fun() const
{
	i++;
//	j++;
}
int main()
{
	Demo dobj;
	dobj.fun();
	return 0;
}
