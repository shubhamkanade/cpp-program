#include<iostream>
using namespace std;
class demo
{
	public:
		int x,y;
	public:
		void fun();
		void run();
};
void demo:: fun()
{
	cout<<"inside fun\n";
}
void demo:: run()
{
	cout<<"inside run\n";
}
int main()
{
	demo obj;
	obj.fun();
	obj.run();
	return 0;
}
