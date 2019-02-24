#include<iostream>
using namespace std;
class demo
{
public:
void fun(int i)
{
cout<<"first defiantion";
}
void fun(float j)
{
cout<<"second defination";
}
void fun(double d)
{
cout<<"third defination";
}
};
int main()
{
demo obj1;
obj1.fun(10);
obj1.fun(10.0);
obj1.fun(10.0f);
return 0;
}
