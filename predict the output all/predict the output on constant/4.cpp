#include<iostream>
using namespace std;
class Demo
{
        public:
                const int i;
                Demo():i(10)
        {
                cout<<"inside constructor"<<endl;
		i=20;
        }
};
int main()
{
        Demo dobj;
        cout<<dobj.i<<endl;
}

