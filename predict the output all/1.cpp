#include<iostream>
using namespace std;
class demo
{
public:
void fun(int i)
{
cout<<"\nfirst defination";
}
void fun(int i,int j)
{
cout<<"\nsecond defination";
}
};
int main()
{
demo obj;
obj.fun(10);
obj.fun(10,20);
return 0;
}
