#include<stdio.h>
#include<iostream>
class demo
{
public:
void fun(int no)
{
}
void fun(int &ref)
{
}
}obj;
int main()
{
int no=11;
///demo obj;
obj.fun(21);
obj.fun((int&)no);
return 0;
}
