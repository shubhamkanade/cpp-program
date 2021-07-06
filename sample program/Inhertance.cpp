#include<iostream>
using namespace std;

class Base
{
	public:
		int x=10;;

};
class Derived:public Base
{
	private:
		Base::x;
	public:
		int y=1;
	};
int main()
{
Derived d;;
cout<<d.x;
}

