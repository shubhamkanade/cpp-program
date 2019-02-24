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
class Demo
{
        public:
                Demo(int i)
        {
                cout<<"Demo paramerized constructor\n";
        }
                ~Demo()
                {
                        cout<<"Demo destructor\n";
                }
};
class Base:public Demo,public Hello
{
	public:
		Base(int x):Demo(x),Hello(x)
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
