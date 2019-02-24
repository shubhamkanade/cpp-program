#include<iostream>
using namespace std;
class Demo
{
public:
Demo();
~Demo();
};
Demo::Demo()
{
cout<<"default constructor\n";
}
Demo::~Demo()
{
cout<<"detsructor\n";
}
int main()
{
cout<<"inside main"<<endl;
Demo obj;
}
