#include<iostream>
using namespace std;
class Demo
{
public:
void fun(int i)
{
cout<<"first defianiton";
}
void fun(double d)
{
cout<<"second defiantion";
}
};
int main()
{
Demo obj1;
char ch='a';
obj1.fun(ch);
obj1.fun(10.f);
return 0;
}
