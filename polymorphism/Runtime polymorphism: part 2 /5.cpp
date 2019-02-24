#include<iostream>
using namespace std;
class base2
{
	public:
		base2()
		{
			cout<<"base2 constructor\n";
		}
		virtual ~base2()=0;
};
base2::~base2()
{
	cout<<"base2 destructor\n";
}
class derived2:public base2
{
	public:
		derived2()
		{
			cout<<"In derived constructor\n";
		}
		~derived2()
		{
			cout<<"In derived destructor\n";
		}
};
int main()
{
//	base2 bobj;
	derived2 obj;
	return 0;
}

