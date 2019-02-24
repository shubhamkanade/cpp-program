#include<iostream>
using namespace std;
class base1
{
	public:
		void fun()
		{
			cout<<"\nfun of base1";
		}
};
class base2
{
	public:
		virtual void fun()
		{
			cout<<"\nfun of base2";
		}
};
class derived:public base2
{
};
int main()
{
	cout<<"\nbase 1:"<<sizeof(base1);
	cout<<"\nbase 2:"<<sizeof(base2);
	cout<<"\nderived:"<<sizeof(derived);
	return 0;
}

