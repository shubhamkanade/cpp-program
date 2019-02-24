#include<iostream>
using namespace std;
typedef class Demo
{
	public:
		int i;
		int j;
		int k;
}type1,*type2;
int main()
{
	cout<<sizeof(type1)<<sizeof(type2);
	return 0;
}

