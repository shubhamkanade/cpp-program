#include<iostream>
using namespace std;
class base
{
public:
int i,j;
virtual void gun(int)
{
cout<<"base gun";
}
virtual void sun()
{
cout<<"base sun";
}
};
class derived:public base
{
public:
int x;
void gun()
{
cout<<"derived gun";
}
void sun()
{
cout<<"derived sun";
}
};
int main()
{
derived dobj;

int *p=NULL;

p=(int *)&dobj;

int *q=NULL;
q=(int *)(*p);


void(*fp)(int);

fp=(void(*)(int)(*q);

dobj.fp(11);























