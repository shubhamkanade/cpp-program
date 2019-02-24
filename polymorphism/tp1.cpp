#include<iostream>
using namespace std;
class demo
{
public:
 void fun()
{
cout<<"inside fun";
}
void gun()
{
cout<<"isndie gun";
}
};
class hello:public demo
{
public:
void sun()
{
demo::fun();
cout<<"isndie sun";
}
void run()
{
cout<<"inside run";
}
};
int main()
{
cout<<sizeof(hello);
hello dobj;
dobj.sun();
return 0;
}
