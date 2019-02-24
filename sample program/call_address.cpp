#include<iostream>
using namespace std;
void fun(int *ptr)
{
*ptr=33;
}
int main()
{
int i=32;
cout<<i;
fun(&i);
cout<<i;
return 0;
}

/*void fun(void);
int main()
{
int i=32;
cout<<i;
fun(&i);
cout<<i;
return 0;
}
fun(int *ptr)
{
*ptr=33;
}*/

