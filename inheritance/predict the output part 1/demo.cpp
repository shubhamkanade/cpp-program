#include<iostream>
using namespace std;
class Demo
{

}
;
class Derived:public Demo
{
};
int main()
{
cout<<"size of Demo"<<sizeof(Demo);
cout<<"sizeof derived"<<sizeof(Derived);
return 0;
}
