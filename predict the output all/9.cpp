#include<iostream>
using namespace std;
class demo
{
public:
void fun(int i)
{
cout<<"first defination";
}
/*void fun(double d)
{
cout<"second defination";
}*/
};
int main()
{
demo obj1;
char ch='a';
obj1.fun((int)ch);
obj1.fun((int)10.0f);
return 0;
}


