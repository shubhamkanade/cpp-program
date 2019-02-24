//if we overload the function across the classes as shown below then it is called as redefination
//derived class hides the defination of base fun
#include<iostream>
using namespace std;

class base
{
	public:
		int i;
		void fun();
};
void base::fun()
{
	cout<<"inside base fun\n";
}
class derived:public base
{
	public:
		int i;
		void fun();
};
void derived::fun()
{
	cout<<"inside derived fun\n";
}
int main()
{
derived dobj;
dobj.fun();
return 0;
}
