#include<iostream>
using namespace std;
#include<stdio.h>

void fun(int i)
{
	if(!i)
		printf("Inside if");
}
int main()
{
	fun(1);
	return 0;
}
