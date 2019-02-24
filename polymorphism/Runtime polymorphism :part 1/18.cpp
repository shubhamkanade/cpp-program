#include<iostream>
using namespace std;
class Base
{
        public:
                int x,y;
                virtual void fun()
                {
                        cout<<"fun() of base class\n";
                }
                virtual void gun()
                {
                        cout<<"gun of base class\n";
                }
                virtual void sun()
                {
                        cout<<"sun() of Base\n";
                }
};
class Derived:public Base
{
        public:
                int a,b;
                void fun()
                {
                        cout<<"fun of derived\n";
                }
                void gun()
                {
                        cout<<"gun of derived\n";
                }
		virtual void run()
		{
			cout<<"run() of Derived class\n";
		}
};
int main()
{
Base bobj;
Derived dobj;

int *pobj=(int*)&bobj;
int *vp=(int*)(*pobj);
void(*fp1)();
fp1=(void (*)())(*vp);
fp1();
fp1=(void (*)())(*(vp+4));
fp1();
pobj=(int*)(&dobj);
vp=(int*)(*pobj);
fp1=(void (*)())(*vp);
fp1();
fp1=(void (*)())(*(vp+2));
fp1();
fp1=(void(*)())(*(vp+6));
fp1();
           
return 0;
}
