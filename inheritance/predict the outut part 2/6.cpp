#include<iostream>
using namespace std;
class Base
{
        public:
                void fun()
                {
                        cout<<"base fun"<<endl;
                }
                void gun()
                {
                        cout<<"Insuide Base gun"<<endl;
                }
};
class Derived:private Base
{
        public:
            using    Base::fun;
};
int main()
{
        Base bobj;
        bobj.fun();
        Derived dobj;
	      dobj.fun();
        return 0;
}

