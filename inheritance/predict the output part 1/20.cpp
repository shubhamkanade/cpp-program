#include<iostream>
using namespace std;
class Base 
{
};
class Derived:public Base
{
};
int main()
{
	cout<<"Base"<<sizeof(Base);
	cout<<"Derived"<<sizeof(Derived);
	return 0;
}
