#include<iostream>
using namespace std;
typedef class Demo
{
	public:
		int i;
		int j;
		int k;
}*type2;
int main()
{
	Demo* p1,p2;
	type2 q1,q2;
	cout<<sizeof(p1)<<"\n"<<sizeof(p2)<<endl;
	cout<<sizeof(q1)<<sizeof(q2)<<endl;
	return 0;
}
