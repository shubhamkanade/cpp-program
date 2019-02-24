#include<iostream>
using namespace std;
struct b
{
void print()
{
cout<<"Print of b"<<endl;
}
};
struct d:public b
{
void print()
{
cout<<"print of d"<<endl;
}
};
int main()
{
b *ptr=new d();
ptr->print();
}
