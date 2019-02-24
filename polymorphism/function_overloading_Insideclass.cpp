#include<stdio.h>
#include<iostream>
using namespace std;
class demo
{
public:
int add(int no1,int no2)
{
return (no1+no2);
}
int add(int no1,int no2,int no3)
{
return (no1+no2+no3);
}
};
int main()
{
demo obj;

cout<<obj.add(10,20);
cout<<obj.add(10,20,30);
return 0;
}

