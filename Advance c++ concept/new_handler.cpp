//new handler is a new concept which is added by c++ new is used to allocate the memory 
//if new operator is fails to allocate memery the os calls internally function with the help of set_new_handler macro
#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;
void fun()
{
	cout<<"unable to allocate memery\n";
}
int main()
{
	set_new_handler(fun);

	char *ptr=new char[1024*1024*1024];

	cout<<"memeory allocated successfully\n";
	return 0;
}
