#include<stdio.h>
#include<iostream>
using namespace std;
class Demo
{
        public:
                int i,j;
                Demo()
                {
                        cout<"Default constructor\n";
                        i=j=11;
                }
                Demo(Demo &obj,int no=10)
                {
                        cout<<"Copy constructor\n";
                        i=obj.i;
                        j=obj.j;
                }
               /* ~Demo()
                {
                        cout<<"Destructor\n";
                }*/
};
int main()
{
        Demo obj;
        Demo obj1(obj);
	Demo obj2(obj,5);
	cout<<obj2.i<<obj2.j<<endl;

        cout<<obj.i<<obj.j<<endl;
        cout<<obj1.i<<obj1.j<<endl;
        return 0;
}

