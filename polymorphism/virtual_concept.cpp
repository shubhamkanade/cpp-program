//if same names and prototyped function is defined across the classes with the virtual keyword then it is called as 
//overriding which is comes under run time polymorphism

#include<iostream>
using namespace std;
class base
{
	public:
		virtual void fun()
		{
			cout<<"base fun";
		}
};
class derived
{
	public:
		void fun()
		{
			cout<<"derived fun";
		}
};
int main()
{
base bobj;
derived dobj;
base &bref=bobj; 
base &bref2=dobj;
bref2.fun();
return 0;
}

