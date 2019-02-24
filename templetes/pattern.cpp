#include<iostream>
using namespace std;

	template<class t>
t Display(t value,int iSize)
{
	while(iSize--)
		cout<<value<<"\t";
		cout<<"\n";
}
int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);
	return 0;
}
