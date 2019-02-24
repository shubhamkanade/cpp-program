#include<iostream>
using namespace std;
class demo
{
public:
void fun(const int i,int j)
{
//i++;
//i=21;
j++;
j=51;
}
};
int main()
{
const int x=51;
int y=11;
int z=101;

demo obj;
obj.fun(10,20);
obj.fun(y,z);
obj.fun(x,y);
obj.fun(y,x);
return 0;
}
