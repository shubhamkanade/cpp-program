#include<iostream>
#include<stdio.h>
using namespace std;
class demo
{
public:
void fun(char ch1)
{
printf("inside fun");
}
void fun(char ch1,char ch2)
{
printf("isndie fun2");

}
};
int main()
{
demo obj;
obj.fun('A');
obj.fun('a','B');
return 0;
}

