#include<iostream>
using namespace std;
class Base
{
        public:
                void fun(int);
};
void Base::fun(int i)
{
        cout<<"base fun\n";
}
class Derived:public Base
{
        public:
                void fun(int,int);
};
void Derived::fun(int i,int j)
{
        cout<<"Derived fun\n";
}
int main()
{
        Base bobj;
        Derived dobj;
        bobj.fun(10);
    dobj.fun(10,20);
	dobj.Base::fun(20);
        return 0;
}


