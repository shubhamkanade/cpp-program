#include<iostream>
using namespace std;
class demo
{
public:
static void fun(int i)
{
cout<<"first defination";
}
void fun(int i){
cout<<"seocnd deifnation";
}
};
int main()
{
demo obj1;
obj1.fun(10);
demo::fun(10);
return 0;
}
