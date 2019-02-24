#include<stdio.h>
#include<iostream>
using namespace std;

int foo()
{
return 0;
}
int main()
{
int i;
for(foo();foo();i=2)
printf("in for loop");
printf("after for loop");
}
