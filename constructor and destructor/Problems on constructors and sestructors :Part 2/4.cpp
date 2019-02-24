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
                Demo(Demo &obj)
                {
                        cout<<"Copy constructor\n";
                        i=obj.i;
                        j=obj.j;
                }
                /*~Demo()
                {
                        cout<<"Destructor\n";
                }*/
};
int main()
{
        Demo obj;
        Demo obj1(obj);
	Demo obj2;
	obj2.i=obj2.j=21;
	obj1=obj2;
        cout<<obj.i<<obj.j<<endl;
        cout<<obj1.i<<obj1.j<<endl;
	cout<<obj2.i<<obj2.j<<endl;        
return 0;
}

