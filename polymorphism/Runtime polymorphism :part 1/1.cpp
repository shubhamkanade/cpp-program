#include<iostream>
using namespace std;
class base
{
public:
void fun()
{
cout<<"\nfun of base";
}
};

class derived:public base
{
public:
void fun()
{
cout<<"\nfun of derived";
}
};
int main()
{
base bobj;
bobj.fun();
derived dobj;
dobj.fun();
base *bp;
bp=&bobj;
bp->fun();
derived *dp;
dp=&dobj;
dp->fun();
bp=&dobj;
bp->fun();
return 0;
}
