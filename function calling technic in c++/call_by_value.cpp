#include<iostream>
void fun(int iNo)//necked function
{
iNo=11;
}
int main()
{
int i=21;
std::cout<<"before calling function="<<i;
fun(i);
//out<<\t;
std::cout<<"\nafter calling function="<<i;
return 0;
}
