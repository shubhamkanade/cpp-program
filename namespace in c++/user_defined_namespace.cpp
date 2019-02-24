//namespace is concept in which ther eare group of releted classes
///we can use namespace by two ways by (::) scope resolution operator and by using "using" keyword
#include<iostream>
using namespace std;
namespace demo
{
class hello
{
public:
void fun()
{
cout<<"\ninside fun";
}
};
}
int main()
{
//#include<iostream>

demo::hello hobj;
hobj.fun();
using namespace demo;
hello hobj1;
hobj1.fun();
return 0;
}
