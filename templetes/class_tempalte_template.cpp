#include<iostream>
using namespace std;
template<class T>
class arithematic
{
public:
T no1,no2,ans;
void add();
void sub();
};
template<class T>
void arithematic<T>::add()
{
ans=no1+no2;
}
template<class T>
void arithematic<T>::sub()
{
ans=no1-no2;
}
int main()
{
arithematic <int>dobj;
arithematic <float>dobj1;
arithematic <double>dobj2;
dobj.no1=10;
dobj.no2=20;
//cout<<dobj.add();
//cout<<dobj.sub();
dobj.add();
cout<<dobj.ans;
dobj1.no1=10.0f;
dobj1.no2=20.0f;
dobj1.add();
cout<<dobj.ans;
return 0;
}
