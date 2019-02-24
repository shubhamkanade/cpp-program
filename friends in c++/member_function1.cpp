#include<iostream>
using namespace std;
class hello
{
	public:int i;
	private:int j;
	protected:int k;
	public:
		  void fun();
		  void gun();
};
class demo
{public:
int x;
protected:
int y;
private:
int z;

		friend void hello::fun();   //friend declaration
};
void hello::fun()
{
	demo hobj;
	cout<<hobj.x<<endl;
	cout<<hobj.y<<endl;
	cout<<hobj.z<<endl;
}
void hello::gun()
{
demo hobj1;
  cout<<hobj1.x<<endl;
        cout<<hobj1.y<<endl;
        cout<<hobj1.z<<endl;
}


