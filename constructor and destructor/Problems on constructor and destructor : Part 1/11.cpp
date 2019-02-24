#include<iostream>
#include<malloc.h>

using namespace std;
class Demo
{
public:
int i,j;
Demo()
{
cout<<"Default\n";
}
~Demo()
{
cout<<"Destructor\n";
}
};
int main()
{
Demo obj1;
Demo *p=(Demo*)malloc(sizeof(Demo));
return 0;
}
