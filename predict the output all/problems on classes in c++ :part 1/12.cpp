#include<iostream>
using namespace std;
typedef class Demo
{
	public:
		int i;
		int j;
}obj;
int main()
{
	obj obj1={10,20};
	cout<<obj1.i<<obj1.j<<endl;
	return 0;
}
