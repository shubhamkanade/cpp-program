#include<iostream>
using namespace std;
class Base
{
	public:
		static Base()
		{
			cout<<"inside constructor";
		}
		static ~Base()
		{
			cout<<"inside detructor";
		}
};
int main()
{
	Base bobj1;
	return 0;
}
