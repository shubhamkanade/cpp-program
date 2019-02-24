//#include<iostream>
//using namespace std;
#include<stdio.h>
struct demo
{
//int i=11;
int j;
float f;
void (*fptr)();
};
void fun()
{
printf("inside fun");
}
int main()
{
struct demo obj;
obj.fptr=fun;
obj.fptr();
printf("‘%ld",sizeof(obj));
}
