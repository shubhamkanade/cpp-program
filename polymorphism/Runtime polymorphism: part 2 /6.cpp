#include<iostream>
using namespace std;
class base2
{
	public:
		base2()
		{
			cout<<"in base2 constructor\n";
		}
		virtual ~base2()=0;
		void fun()
		{
			cout<<"inside base2 fun\n";
		}
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
			cout<<"in derived2 constructor\n";
		}
		~derived2()
		{
			cout<<"derived2 destructor\n";
		}
};
int main()
{
	cout<<"sizeof base class:"<<sizeof(base2)<<endl;
	cout<<"sizeof derived class:"<<sizeof(derived2)<<endl;
	derived2 obj;
	obj.fun();
	base2 *bp=&obj;
	bp->fun();
	return 0;
}
