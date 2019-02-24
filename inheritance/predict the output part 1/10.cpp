#include<iostream>
using namespace std;
class Hello
{
        public:
                Hello(int i)
                {
                        cout<<"Helo paramerized constructor\n";
                }
                ~Hello()
                {
                        cout<<"Hello destructor\n";
                }
};
class Demo:public Hello
{
        public:
                Demo(int i):Hello(i)
        {
                cout<<"Demo paramerized constructor\n";
        }
                ~Demo()
                {
                        cout<<"Demo destructor\n";
                }
};
class Base:public Demo
{
        public:
                
                Base(int x):Demo(x)
        {
	               cout<<"Paramerized cons\n";
        }
                ~Base()
                {
                        cout<<"base destructor\n";
                }
};
int main()
{
        Base bobj(11);
        return 0;
}


