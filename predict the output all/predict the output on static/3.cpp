#include<iostream>
using namespace std;
class Demo
{
        public:
                int i,j;
                static int k;
                Demo()
                {
                        i=10;
                        j=20;
                        k=30;
                }
};
int Demo::k=21;
int main()
{
        Demo dobj;
        cout<<dobj.i<<dobj.j<<dobj.k<<endl;
        return 0;
}

