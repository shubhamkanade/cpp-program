#include<iostream>
using namespace std;
class Demo
{
public:
int fun(int i)
{
cout<<"first defination";
}
float fun(int j)
{
cout<<"second defination";
}
};
int main()
{
Demo obj;
int i;
float f;
i=obj.fun(i);
f=obj.fun(f);
return 0;
}
