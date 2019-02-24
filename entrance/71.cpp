#include<stdio.h>
#include<iostream>
using namespace std;
#pragma pack(1)
union u1
{
	float a;
	struct s1
	{
		char p;
		float f;
	}b;
	float c;
}var;

int main()
{
	printf("size of var is %ld\n",sizeof(var));
	return 0;
}
