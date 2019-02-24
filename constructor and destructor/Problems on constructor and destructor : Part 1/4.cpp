#include<iostream>
using namespace std;
class Demo
{
public:
int i,j;
Demo()
{
cout<<"Default\n";
}
Demo(int x,int y)
{
cout<<"Parameterized \n";
}
~Demo()
{
cout<<"Destructor\n";
}
};
int main()
{
Demo obj1;
Demo obj2(10,20);
return 0;
}
