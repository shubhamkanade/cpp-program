#include<iostream>
using namespace std;
class demo
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
demo obj;
int i;
float j;
i=obj.fun(i);
j=obj.fun(j);
return 0;
}

