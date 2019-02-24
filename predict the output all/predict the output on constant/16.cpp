#include<iostream>
using namespace std;
class Demo
{
public:
Demo()const
{
cout<<"constructor";
}
~Demo()const
{
cout<<"Destructor";
}
};
int main()
{
Demo donj;
return 0;
}
