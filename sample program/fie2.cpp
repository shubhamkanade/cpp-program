#include<iostream>
using namespace std;
#include<iomanip>
ostream& format1(ostream& out)
{
	out.width(10);
	out.precision(3);
	out.fill('*');
	return out;
}
int main()
{
	int n=15;float f=2.3456;
	cout<<format1<<f<<format2<<n;
	return 0;
}
