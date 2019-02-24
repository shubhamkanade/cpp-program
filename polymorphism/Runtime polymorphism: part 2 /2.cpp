#include<iostream>
using  namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Base COnstructor"<<endl;
		}
		~Base()=0
		{
			cout<<"Base constructor";
		}
};
int main()
{
	Base bobj;
	return 0;
}
