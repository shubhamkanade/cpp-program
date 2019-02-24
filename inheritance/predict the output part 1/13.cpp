#include<iostream>
using namespace std;
class Base
{
	public: int i,j;
	Base()
	{
		cout<<"Base default const\n";
		i=10;
		j=20;
	}
	~Base()
	{
		cout<<"Base destructor\n";
	}
};
class Derived:public Base
{
	public:
		int i,j;
		Derived(int x,int y)
		{
			cout<<"Derived parameterized constr\n";
		}
		~Derived()
		{
			cout<<"Derived Destructor\n";
		}
};
int main()
{
	Base bobj;
	Derived dobj(11,21);
	cout<<"base "<<sizeof(bobj)<<endl;
	cout<<"derived"<<sizeof(dobj)<<endl;
	return 0;
}
