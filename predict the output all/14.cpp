#include<iostream>
using namespace std;
class demo
{
public:
void fun(short int i)
{
cout<<"first defination";
}
void fun(long int i)
{
cout<<"secod defination";
}
};
int main()
{
demo obj1;
obj1.fun((short)10);
obj1.fun((long)10);
obj1.fun(10);
return 0;
}
