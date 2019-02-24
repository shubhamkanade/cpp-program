#include<stdio.h>
#include<iostream>
using namespace std;
class Demo
{
        public:
                int i;
                static int k;
                Demo()
                {
                        i=10;
                }
                void fun()
                {
                        cout<<"in fun i is"<<++i<<endl;	
			cout<<"in fun k is"<<++k<<endl;
			k=31;
                        i=21;
                }
};
int Demo::k=20;
int main()
{
        Demo dobj;
        dobj.fun();
        cout<<"in main k "<<dobj.k<<endl<<"in main i"<<dobj.i<<endl;
        return 0;
} 
