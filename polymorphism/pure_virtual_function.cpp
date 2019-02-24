#include<iostream>
using namespace std;
class base
{
public:
int i,j;
virtual void add(int,int)=0; //pure virtual function
void sub(int i,int j)
{
cout<<i-j;
}
};
class derived:public base
{
public:
int x,y;
void add(int x,int y)
{
cout<<x+y;
}
void mult(int x,int y)
{
cout<<x*y;
}
};
int main()
{
//base bobj;
base *bp;
derived dobj;
dobj.mult(1,2);
dobj.add(5,4);
return 0;
}
