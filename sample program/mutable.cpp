#include<iostream>
using namespace std;
class demo
{
public:
int i;
mutable int j;

demo()
{
i=10;
j=12;
}
};
int main()
{
demo obj1;
const demo obj2;

obj1.i++;
obj1.j++;

obj2.i++;
obj2.j++;
return 0;
}

