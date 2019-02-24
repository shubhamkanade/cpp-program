#include<iostream>
using namespace std;
class base
{
public:
int i,j;
virtual void add(int,int)=0; //if a class contain single virtual fuction thn that class is acallled as abstract class

void sub(int i,int j) //concreate class
{
cout<<i-j;
}
};
class derived:public base
{
public:
int x,y;
void add(int i,int y)
{
cout<<i+y;
}
void mult(int i,int j)
{
cout<<i*j;
}
};

int main()
{
//base bobj; 
derived dobj;
cout<<sizeof(base);
return 0;
}

