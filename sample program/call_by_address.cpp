#include<iostream>
using namespace std;
void fun(int &ref)
{
	ref=11;
}
int main()
{
	int i=23;
	cout<<i;//printf("%d",i);
	fun(i);
cout<<i;	//printf("%d",i);
	return 0;
}
