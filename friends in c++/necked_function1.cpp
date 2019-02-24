//friend is not a part of class due to which the concept f thid pointer is not applicable on friend
#include<iostream>
using namespace std;
void fun();
void gun();
class hello
{
	public:
		int i;
		//int j;
	private:
		int j;
	protected:
		int z;
		friend void fun();
};
void fun()
{
	hello hobj;
	cout<<hobj.i<<endl;
	cout<<hobj.j<<endl;
	cout<<hobj.z<<endl;
}
void gun()
{
 hello hobj1;
        cout<<hobj1.i<<endl;
        cout<<hobj1.j<<endl;
        cout<<hobj1.z<<endl;
}

