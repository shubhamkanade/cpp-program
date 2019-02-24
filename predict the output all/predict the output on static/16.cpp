#include<iostream>
using namespace std;
class Base
{
	public:
		static int i;
		int j;
		Base()
		{
			i=11;
			j=21;
		}
		Base(Base &ref)
		{
			i=Base::i;
			this->j=j;
		}
};
int Base::i=21;
int main()
{
	Base bobj1;
	bobj1.j=51;
	bobj1.i++;
	cout<<bobj1.i<<bobj1.j<<endl;
	Base bobj2(bobj1);
	cout<<bobj1.i<<bobj1.j<<endl;
	return 0;
}
