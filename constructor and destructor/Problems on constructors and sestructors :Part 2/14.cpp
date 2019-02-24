#include<iostream>
using namespace std;
class Demo
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
}
};
int main()
{
cout<<"Inside main"<<endl;
Demo();
return 0;
}
