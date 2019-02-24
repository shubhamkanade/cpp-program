#include<stdio.h>
#include<iostream>
void fun(const int no1,int no2)
{
no1++;
no2++;
}
int main()
{
int x=10;
int y=20;
fun(10,20);

x++;
y++;

return 0;
}
