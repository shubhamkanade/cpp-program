#include<iostream>
using namespace std;
class demo
{
public:
static void fun(int i)
{
cout<<"first defination";
}
static void fun(double d)
{

}
};
int main()
{
demo::fun(10);
demo::fun(10.00);
}
