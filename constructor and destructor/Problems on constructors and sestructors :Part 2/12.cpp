#include<iostream>
using namespace std;
class Demo
{
public:
int i,j;
Demo()
{
cout<<"Default constructor\n";
this->i=10;
(*this).j=20;
}
~Demo()
{
cout<<"destructor\n";
}
};
int main()
{
cout<<"Inside main\n";

Demo obj3;
cout<<obj3.i<<obj3.j<<endl;
}
