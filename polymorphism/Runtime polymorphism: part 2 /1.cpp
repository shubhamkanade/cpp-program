#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Base constructor"<<endl;
		}
		~Base()=0;
};
int main()
{
	Base bobj;
	return 0;
}
