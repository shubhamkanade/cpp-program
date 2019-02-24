#include<iostream>
using namespace std;
class Demo
{
        public:int i,j;
               const static int k=21;
               Demo()
               {
                       i=10;
                       j=20;
               }
};
int main()
{
        Demo dobj;
        cout<<dobj.k<<endl;
        return 0;
}

