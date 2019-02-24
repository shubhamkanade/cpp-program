#include<iostream>
using namespace std;
class Base
{
	public:
		int i,j;
		static int k;
};
int Base::k;
class Derived:public Base
{
	public:
		int x,y;
};
int main()
{
	cout<<"sizoef base class: "<<sizeof(Base)<<endl;
	cout<<"sizeo f derived class:"<<sizeof(Derived)<<endl;
	return 0;
}
