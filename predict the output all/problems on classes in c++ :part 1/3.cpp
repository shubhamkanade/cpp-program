#include<iostream>
using namespace std;
#pragma pack(1)
class Demo
{
	int i;
	char c;
	int j;
};
int main()
{
	cout<<sizeof(Demo)<<endl;
	return 0;
}
