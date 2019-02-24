#include<iostream>
using namespace std;
typedef class 
{
	public:
		int i;
}*type1,type2;
int main()
{
	type2 obj={10};
	type1 p,*q;
	p=&obj;
	q=&p;
	cout<<obj.i<<p->i<<(*q)->i;
	cout<<(&obj)->i<<(*p).i<<(**q).i;
	return 0;
}
