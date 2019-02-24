
//call by  address

#include<iostream>
using namespace std;
void gun(int *iPtr) //int *iPtr=&i;
{

*iPtr=11;

}
int main()
{
int i=21;
cout<<i;
gun(&i);
cout<<"\t";
cout<<i;
return 0;
}
