#include<iostream>
using namespace std;
class base
{
	public:
		int i,j;
		base(int x) ////parameterized consructor
		{
			i=x;
			j=x;
		}
};
class derived:protected base
{
	public:
		int a,b;
		derived():base(11)
		{
			cout<<"derived const";
		}
};
int main()
{
	base bobj(11);
	derived dobj;
	cout<<dobj.i;
	return 0;
}
