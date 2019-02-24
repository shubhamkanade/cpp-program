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
};
int Demo::k=20;
int main()
{
	Demo dobj1,dobj2;
	dobj1.i++;
	cout<<dobj1.i<<dobj2.i<<endl;
	dobj1.k++;
	cout<<dobj1.k<<dobj2.k<<endl;
	return 0;
}

