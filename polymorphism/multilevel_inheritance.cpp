#include<iostream>
using namespace std;
class base
{
public: int x,y;
virtual void fun()
{
cout<<"base fun";
}
};
class derived:public base
{
public : int k;
void fun()
{
cout<<"derived fun";
}
};
class derived1:public derived
{
public:int r;
};
int main()
{
derived1 dobj;
base bobj;
base *bp=NULL;
bp=&dobj;
bp->fun();
return 0;
}
