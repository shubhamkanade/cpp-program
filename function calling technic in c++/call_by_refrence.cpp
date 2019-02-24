//call by refrence is concept in which we can give new name for existing variable

#include<iostream>
using namespace std;
void fun(int &ref)  //necked function
{
ref=51;

}
int main()
{
int i=21;
cout<<i;
fun(i);
cout<<"\t"<<i;
return 0;
}
