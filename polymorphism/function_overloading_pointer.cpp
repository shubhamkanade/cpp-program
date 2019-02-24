#include<iostream>
using namespace std;
class demo
{
public:
void fun(void *ptr)
{
}
void fun(int *ptr)
{
}
void fun(char *ptr)
{
}
}obj;
int main()
{
int no=11;
char ch='a';

obj.fun(&no);
obj.fun(&ch);
obj.fun((char*)&no);
obj.fun((int*)&ch);
obj.fun((int*)400);
obj.fun((char*)400);
return 0;
}
