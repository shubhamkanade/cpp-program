#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"base constructor"<<endl;
		}
		~Base()=0;
};
Base::~Base()
{
	cout<<"Base constructor"<<endl;
}
int main()
{
	Base bobj;
	return 0;
}
