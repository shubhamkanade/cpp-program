#include<iostream>
using namespace std;
class Demo
{
~Demo()
{
cout<<"Destructor\n";
}
};
int main()
{
Demo obj;
return 0;
}
