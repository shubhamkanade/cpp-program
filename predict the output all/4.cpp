#include<iostream>
using namespace std;
class demo
{
public:
void fun(signed int i)
{
cout<<"first definationn";
}
void fun(unsigned int j)
{
cout<<"seccond defination";
}
};
int main()
{
demo obj;
int i=10;
unsigned int j=11;
obj.fun(i);
obj.fun(j);
return 0;
}

