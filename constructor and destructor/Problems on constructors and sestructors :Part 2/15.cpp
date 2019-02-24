#include<iostream>
using namespace std;
typedef class Demo
{
public:
int i,j;
Demo()
{
cout<<"Default constructor\n";
}
~Demo()
{
cout<<"Destructor\n";
}obj1,obj2;
int main()
{
cout<<"INSIDE MAIN"<<endl;
return 0;
}

