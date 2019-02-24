#include<stdio.h>
#include<iostream>
using namespace std;
static int x;
void f()
{
static int x;
printf("%d ",++x);
}
int main()
{
int x=5;
f();
f();
//printf("%d",x);
return 0;
}
