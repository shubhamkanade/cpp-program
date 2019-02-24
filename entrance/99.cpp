#include<stdio.h>
#include<iostream>
using namespace std;
void foo();
int main()
{
	try
	{
		foo();
	}
	catch(...)
	{
		cout<<"caught in main"<<"\n";
	}
	return 0;
}
void foo()
{
	try
	{
		throw 10;
	}
	catch(int num)
	{
		cout<<"caught in foo"<<endl;
		throw;
	}
}
