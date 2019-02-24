#include<iostream>
using namespace std;
class demo
{
public:
void fun(int i) const
{
cout<<"first defination";
}
void fun(int j)
{
cout<<"second defination";
}
};
int main()
{
const demo obj;
demo obj1;
int i=10;
obj.fun(i);
obj1.fun(i);
return 0;
}
