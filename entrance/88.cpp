#include<iostream>
#include<stdio.h>
using namespace std;
void my(int x)
{
if(x>0)
{
my(--x);
}
printf("%d",x);

}
int main()
{
my(5);
return 0;
}

