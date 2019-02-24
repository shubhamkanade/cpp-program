#include<iostream>
using namespace std;
class Demo1
{
	public:
		int i,j;
		void fun()
		{
			cout<<"Fun of Demo1\n";
		}
};
class Demo2
{
	public:
		int i,j;
		virtual void fun()
		{
			cout<<"fun of Demo2\n";
		}
};
int main()
{
	Demo1 dobj1;
	Demo2 dobj2;
	if(&dobj1==(Demo1*)&dobj1.i)
		cout<<"Success Demo1\n";
	else
		cout<<"fail demo1\n";
	if(&dobj2==(Demo2*)&dobj2.i)
		cout<<"Success Demo2\n";
	else
		cout<<"Fail demo2\n";
	return 0;
}
