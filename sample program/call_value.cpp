#include<iostream>
using namespace std;
void fun(int no)
{
no=11;
}
int main()
{
int i=21;;
cout<<i;
fun(i);
cout<<i;
return 0;
}
