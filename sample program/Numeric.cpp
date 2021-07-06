#include<iostream>
using namespace std;

class Numeric
{
	public:
		int a=0;
		int b=0;

		void display1()
		{
			a=a+10;;
			cout<<a;
		}
		void display2()
		{
			a=a+10;;
			cout<<" "<<a<<endl;;
		}
		
};

int main()
{
	Numeric nobj;
	nobj.display1();
	nobj.display2();
}
