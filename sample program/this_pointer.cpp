#include<iostream>
using namespace std;
class demo
{
public:
int i,j;
demo()
{
this->i=20;
(*this).j=20;
}
~demo()
{
cout<<this->i;
}
void gun()
{
cout<<this->i;
}
void fun()
{
(*this).gun();
}
};
