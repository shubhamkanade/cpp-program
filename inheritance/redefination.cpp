#include<iostream>
using namespace std;
class base
{
public:int i;
};
class derived
{
public:int i;
};
class derived2:public base,derived
{
public:int i;
};
int main()
{
derived dobj;
dobj.i;
return 0;
}
