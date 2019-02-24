#include<iostream>
using namespace std;
class demo
{
public:
virtual void fun()
{
//code
}
void gun()
{
}
};
class derived:public demo
{
public:
void run()
{
}
};
int main()
{
derived obj;
cout<<sizeof(obj);
}
