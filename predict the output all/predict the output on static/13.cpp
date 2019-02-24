#include<iostream>
using namespace std;
class Base
{
public:
int i,j;
static int k,l;
};
class Derived:public Base
{
public:
int a,b;
static int x,y;
};
int Base::k=10,l=20;
int Derived::x=50,y=60;
int main()
{
cout<<sizeof(Base)<<endl;
cout<<sizeof(Derived)<<endl;
}
