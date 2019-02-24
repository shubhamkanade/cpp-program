#include<iostream>
using namespace std;
typedef struct hello
{
	int i;
	void (*fp)();
}NODE;
void fun()
{
	cout<<"inside fun\n";
}
int main()
{
	NODE hobj;
	hobj.fp=fun;
	hobj.fp();
	return 0;
}
