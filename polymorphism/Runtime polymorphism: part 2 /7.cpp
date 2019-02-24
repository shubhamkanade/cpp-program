#include<iostream>
using namespace std;
class base
{
	public:
		virtual void fun()=NULL;
}
;
void base::fun()
{
	cout<<"inside partial defination\n";
}
int main()
{
	base bobj;
	return 0;
}
