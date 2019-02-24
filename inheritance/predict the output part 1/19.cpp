#include<iostream>
#include<stdio.h>
using namespace std;
class Base
{
};
class Derived:public Base
{
public:
int i;
};
int main()
{

	printf("%ld\n",sizeof(Base)); //1
	cout<<sizeof(Derived); //4
	return 0;
}
