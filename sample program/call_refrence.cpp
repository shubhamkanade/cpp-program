#include<iostream>
using namespace std;
void fun(int &ref)
{
ref=12;
}
int main()
{
int i=11;
cout<<i;
fun(i);
cout<<i;
return 0;
}

