#include<iostream>
using namespace std;
class demo
{
public:
void fun(int *p)
{
//cout<<
}
void fun(float *p)
{
}
void fun(void *p)
{
}
};
int main()
{
demo obj;
int no=10;
double d=10.0;
char ch='a';
float f=3.0f;
obj.fun(&no);
obj.fun(&d);
obj.fun(&ch);
obj.fun(&f);
return 0;
}
