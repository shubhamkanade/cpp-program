#include<iostream>
using namespace std;
class demo
{
public:
int i;
const int j;
demo():j(20) //using member initialization list
{
i=10;
}
void fun(int x)
{
i++;
j++;
x++;
}
void gun(int x) const
{
i++;
j++;
}
void run(int x,const int y) const
{
int a=100;
const int b=200;
a++;
b++;
x++;
y++;
i++;
j++;
}

};
int main()
{
demo obj1;
const demo obj2;

obj1.fun(11);
obj1.gun(11);
obj1.run(11,21);

obj2.fun(11);
obj2.gun(11);
obj2.run(11,21);

obj1.i++;
obj2.i++;


return 0;
}

































