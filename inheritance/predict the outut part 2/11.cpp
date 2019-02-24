#include<iostream>
using namespace std;
class Base1
{
	public:
		void fun()
		{
			cout<<"inside Base1 fun"<<endl;
		}
};
class Base2
{
	public:
		void fun()
		{
			cout<<"inside Base2 fun"<<endl;
		}
};
class Derived:public Base1,Base2
{
	 /*public:
                void fun()
                {
                        cout<<"inside Derived fun"<<endl;
                }*/

};
int main()
{
	Derived dobj;
	dobj.fun();
	return 0;
}
