#include<iostream>
using namespace std;
class demo
{
public:
void fun(int i=10)
{
cout<<"firt defination";
}
void fun(int j)
{
cout<<"second defination";
}
void fun()
{
cout<<"third defination";
}
};
int main()
{
demo obj;
int i=10;
obj.fun(i);
return 0;
}
