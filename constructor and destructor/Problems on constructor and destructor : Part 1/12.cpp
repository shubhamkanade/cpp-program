#include<iostream>
#include<stdio.h>
#include<stdlib.h>
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
Demo obj1;
int main()
{
Demo obj2;
cout<<"Inside Main"<<endl;
exit(0);
return 0;
}
