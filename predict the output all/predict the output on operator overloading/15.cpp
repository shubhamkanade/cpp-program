#include<iostream>
using namespace std;
class Demo
{
public:
static void fun(int i)
{
cout<<"first defination";
}
static void fun(double d)
{
cout<<"second defiantion";
}
};
int main()
{
Demo::fun(10);
Demo::fun(10.0);
return 0;
}
