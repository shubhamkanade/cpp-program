#include<iostream>
using namespace std;
class Hello
{
        public:
                Hello(int i)
                {
                        cout<<"Helo paramerized constructor  "<<i<<"\n";
                }
		Hello()
		{
		cout<<"Hello Default const\n";
		}
                ~Hello()
                {
                        cout<<"Hello destructor\n";
                }
};
class Demo
{
        public:
                Demo(int i)
        {
                cout<<"Demo paramerized constructor "<<i<<endl;
        }
                ~Demo()
                {
                        cout<<"Demo destructor\n";
         		}
};
class Base:public Demo,public Hello
{
        public:
		Hello hobj;
                Base(int x):Hello(x),Demo(x),hobj()
        {
                cout<<"Base paramerized constr\n";
                }
                ~Base()
                {
                        cout<<"Base destructor\n";
                }
};
int main()
{
        Base bobj(11);
        return 0;
}
                                  
