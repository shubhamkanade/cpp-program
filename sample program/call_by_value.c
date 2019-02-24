#include<stdio.h>
void fun(int no)
{
	no=11;
}
int main()
{
	int i=21;
	printf("%d",i);
	fun(i);
	printf("%d",i);
	return 0;
}
